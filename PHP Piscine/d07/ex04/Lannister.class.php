<?php
class Lannister
{
    public function sleepWith($user)
    {
        if (get_parent_class($user) === Lannister::class)
            print('Not even if I\'m drunk !' . PHP_EOL);
        else
            print('Let\'s do this.' . PHP_EOL);
    }
}
?>