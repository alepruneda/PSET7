<?php

    // CONFIGURATION
    require("../includes/config.php"); 
    
    $id =  $_SESSION["id"];
    // ACTIONS
    $rows = CS50::query("SELECT id, symbols ,shares FROM portfolio WHERE user_id = $id");
    
    // VIEW
    $positions = [];
    
    foreach ($rows as $row)
    {
        // SYMBOL 
        $stock= lookup($row["symbols"]);
        if ($stock !== false)
        {
            $positions[] = [
                "name" => $stock["name"],
                "shares" => $row["shares"],
                "price" => $stock["price"],
                "symbols" => $row["symbols"],
                "total" => sprintf("%.2f", $row["shares"]*$stock["price"])
            ];
        }
    }
    // CASH
    $cash = CS50::query("SELECT username, cash FROM users WHERE id = $id");
    
    // RENDER
    render("portfolio.php", ["positions" => $positions, "title" => "Positions", "cash" => $cash]);
?>
