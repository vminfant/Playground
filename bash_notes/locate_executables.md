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

### locate
---------------
To find the location of the files. 

*  `locate` will do a DB search to list the files that are matching the pattern.
*  DB will be periodically updated using cronjobs. manual updates can be done using `updatedb` command   
*  DB is located usually @ /var/lib/mlocate/mlocate.db  

*Important options:-*  

`-b` : To match only the basename  
`-c` : To get the total count  
`-d` : To specifiy a customer DB (other than @ /var/lib/mlocate/mlocate.db)  
`-S` : To get the statistics about the DB   
`-i` : To perform the case-insensitive search   
`--regex` : To perform search using extended regualar expression  

*Examples:-*  

`$ locate -c ls
3913`

`$ locate -S
Database /var/lib/mlocate/mlocate.db:
        12,649 directories
        104,258 files
        6,047,006 bytes in file names
        2,525,762 bytes used to store database`

`$ locate --regex l? | wc -l
99383`

### find
---------------  
To search for the files in a directory hierarchy  

*Important options:-*   

`-P` : Never follow Symbolic link.  
`-L` : Follow Symbolic link. Properties used will be based on the linked files/directories.  
`-H` : Do not follow Symbolic link.  

*Examples:-* 

`$ ls -lrt file*
-rw-rw-r--. 1 test test   256 Dec  6 14:21 file.txt
lrwxrwxrwx. 1 test test     8 Dec  6 14:22 file.ln -> file.txt
$`

`$ find -P . -name file.ln
./file.ln
$ find -L . -name file.ln
./file.ln
$ find -H . -name file.ln
./file.ln`  

-P & -H are actually displaying the file.ln based on Symbolic link properties itself. However, -L is displaying the files based on the linked file `file.txt`. Try it with `-type` parameter to get more understanding.  

`$ find -H . -name file.ln -type f
$ find -L . -name file.ln -type f
./file.ln
$ find -P . -name file.ln -type f
$`
