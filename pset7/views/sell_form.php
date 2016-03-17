<form action = "sell.php" method = post>
    <fieldset>
    <div class = "form-group">
    <select class = "form-control" name = "symbols">
            <option value = "symbols">Symbols</option>
    <?php
        foreach($symbols as $symbols)
        {
        echo'<option value="'.$symbols["$symbols"].'">'.$symbols["symbols"].'</option>';
        }
    ?>
                </select>
            </div>
            <div class = "form-group">
                <button class = "btn btn-default" type = "sumbmit">
                    Sell
                </button>
            </div>
        </fieldset>
</form>