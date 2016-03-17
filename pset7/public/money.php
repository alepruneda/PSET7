<?php

    // configuration
    require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // else render form
        render("money_form.php", ["title" => "money"]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        if (preg_match("/^\d+$/", $_POST["money"] == NULL))
        {
            apologize("Use valid data");
        }
        else if ($_POST["money"] == NULL)
        {
            apologize("Enter amount of maney");
        }
        else
        {
            CS50::query("UPDATE users SET cash = (cash + ?) WHERE id = ?", $_POST["money"], $_SESSION["id"]);
        }
        redirect("/");
    }

?>