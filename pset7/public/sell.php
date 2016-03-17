<?php

    // configuration
    require("../includes/config.php");
    
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        $symbols = CS50::query("SELECT symbols FROM portfolio WHERE user_id = ?", $_SESSION["id"]);
        render("sell_form.php", ["title" => "Sell", "symbols" => $symbols]);
    }
     // Else if user reached page via POST 
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        if ($_POST["symbol"]=='Symbol')
        {
            apologize("Please enter the stock symbol.");
        }
        
        $stock = lookup($_POST["symbols"]);

        $shares = CS50::query("SELECT shares FROM portfolio WHERE user_id = ? AND symbols = ?", $_SESSION["id"],
        $_POST["symbols"]);
        
        $gain = $shares[0]["shares"] * $stock["price"];
        
        // Eliminates the sell
        CS50::query("UPDATE users SET cash = (cash + ".$gain.") WHERE id = ?", $_SESSION["id"]);
        
        // Symbol eliminates because it is already sold
        $rows = CS50::query("DELETE FROM portfolio WHERE user_id = ? AND symbols = ?", $_SESSION["id"], 
        $stock["symbols"]);
        
        redirect("/");
    }
?>