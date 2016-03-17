<?php

    // configuration
    require("../includes/config.php");

    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        render("register_form.php", ["title" => "Register"]);
    }

    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // validate 
        if (empty($_POST["username"]))
        {
            apologize("Make a username to create an account.");   
        }
        else if (empty($_POST["password"]))
        {
            apologize("Use password for your account.");
        }
        else if (empty($_POST["confirmation"]))
        {
            apologize("Confirm your password.");
        }
        else if ($_POST["password"] != $_POST["confirmation"])
        {
            apologize("Your password and confirmation aren`t equal.");
        }

       if (CS50::query ("INSERT IGNORE INTO users (username, hash, cash) VALUES(?, ?, 10000.0000)", $_POST["username"],
       password_hash($_POST["password"], PASSWORD_DEFAULT)) === false)
       {
           apologize("Username already exists, use another username");
       }
       else
       {
           $rows = CS50::query("SELECT LAST_INSERT_ID() AS id");
           $id = $rows[0]["id"];
           $_SESSION["id"] = $id;
           redirect("index.php");
       }
    }
    else
    render("register_form.php", ["title" => "register"])
    
    ?>