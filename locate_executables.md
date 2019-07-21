### which
---------------
To display the full path of the shell commands. 

*Important options:-*  

`--skip-alias` : To Skip the aliases.  
`--version`    : To get version details

*Examples:-*

`$ which ls
alias ls='ls --color=auto'
        /usr/bin/ls`

`$ which --skip-alias ls
/usr/bin/ls`

### whereis
---------------
To display the binary, source & man page files of the shell commands. 

*Important options:-*  

`-b` : To display only binary locations.   
`-m` : To display only man file paths.  
`-s` : To display only source file paths.  

*Examples:-*

 `$ whereis ls
ls: /usr/bin/ls /usr/share/man/man1/ls.1.gz`

`$ whereis -b ls
ls: /usr/bin/ls`

`$ whereis -m ls
ls: /usr/share/man/man1/ls.1.gz`

`$ whereis -s ls
ls:`
