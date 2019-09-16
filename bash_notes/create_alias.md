# Alias

Command to set alias 

`alias viewtest="head -10 test.log"`

alias name  : viewtest  
cmd         : "head -10 test.log"

When we use alias `viewtest`, `head -10 test.log` will be executed.

* `alias -p` or `alias` will list down all the available aliases.  
* `alias -p | grep viewtest` or `alias viewtest` to list down specific alias

.bashrc or .bash_profile can be used permanently set the aliases. 
