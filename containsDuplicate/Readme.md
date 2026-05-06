install msys

open the faqing msys terminal 

run : pacman -Syu

install compiler mingw c++ toolchain : pacman -S mingw-w64-x86_64-gcc

now open MINGW64 or MSYS MINGW64 terminal 

verify : g++ --version (mainly used for c++, subset of GCC ) compiler for c++

commands for running the cpp : g++ fileName.cpp -o OutName

Result : OutName.exe --> then just ./OutName.exe to see results

dont forget envirenmental variables win + s --> edit system env variables --> env variables --> from user variables PATH -- new and put C:\msys64\mingw64\bin --> restart vs code

| Component | Role              |
| --------- | ----------------- |
| MSYS      | shell + utilities |
| MINGW64   | compiler system   |
| pacman    | installer         |
| g++       | compiler          |
| VS Code   | editor            |
