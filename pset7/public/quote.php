<?php

    // configuration
    require("../includes/config.php"); 

    // if user reached page get 
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        render("quote_form.php", ["title" => "QUOTE"]);
    }

    // else if user reached page post 
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // validate submission
        if (empty($_POST["symbol"]))
        {
            apologize("Enter a valid stock to receive a quote.");
        }

        // lookup the stock price
        $stock = lookup($_POST["symbol"]);

        if ($stock != false)
        {
            // display the quote
            render("quote.php", ["title" => "QUOTE", "stock" => $stock]);
        }
        else
        {
            apologize("Unable to look up quote for " . $_POST["symbol"] . ".");
        }
    }

?>