# GxHotBox.lv2
Analouge simulation of a tube preamp with overdrive and interactive tone control


![GxHotBox](https://github.com/brummer10/GxHotBox.lv2/raw/master/GxHotBox.png)

###### BUILD DEPENDENCY’S 

the following packages are needed to build GxHotBox:

- libc6-dev
- libgtk2.0-dev
- libstdc++6-dev
- lv2-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2