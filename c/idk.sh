#!/bin/sh
echo Hi
sleep 2
pwd && ls -lah
touch schifo.txt && cat /proc/cpuinfo >> schifo.txt
ls -lah && uname -a
cat schifo.txt
echo 'idk, maybe EOF(?)'
exit