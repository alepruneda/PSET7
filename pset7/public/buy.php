<?php

    // configuration
    require("../includes/config.php"); 

    // if form was submitted
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // render
        render("buy_form.php", ["title" => "BUY"]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // validate submission
        if(!preg_match("/^\d+$/", $_POST["shares"]))
        {
            apologize("Enter amount of shares.");
        }
        else if($_POST["symbols"] == null)
        {
            apologize("Use a valid symbols.");
        }
        else if($_POST["shares"] == null)
        {
            apologize("How many shares you are going to buy.");
        }
        else if($_POST["shares"] == 0)
        {
            apologize("Indicate how many shares you are going to buy.");
        }

        else
        {
            $stock = lookup($_POST["symbols"]);
            $purchase = $_POST["shares"] * $stock["price"];
            $rowcash = CS50::query("SELECT cash FROM users WHERE id = ?",
            $_SESSION["id"]);
            $cash = $rowcash[0]["cash"];
            
            //Si se cuenta con el dinero
            if ($cash > $purchase)
            {
                CS50::query("INSERT INTO portfolio (user_id, symbols, shares) VALUES (?, ?, ?) ON DUPLICATE KEY UPDATE shares = shares + ?",
                $_SESSION["id"], $_POST["symbols"], $_POST["shares"], $_POST["shares"]); 
                CS50::query("UPDATE users SET cash = (cash - ".$purchase.") WHERE id = ?", 
                $_SESSION["id"]);
                redirect("/");
            }
            else
            {
                // Si no se cuenta con el dinero necesario
                if ($cash < $purchase)
                {
                    apologize("Sorry, you don't have enough money");
                }
            }
            
        }
    }
?>