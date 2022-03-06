# CCreate
CCreate is a tool for Linux and other Unix based sytems in its early stages of development to create and fill some boiler plate code and folders with one bash command
## Installation
Simply download the CCreate file inside of the Release folder then run 
```console
cp path/to/ccreatedownload /user/local/bin 
```
### Compiling from source
If you wish to compile  CCreate from source you must first makesure you have Git and CMake installed then run this in the command line
```console
git clone --recursive https://github.com/GeekOfTheWild/CCreate.git 
cd CCreate
mkdir build
cd build
cmake ..
make
```
and there's your executable!
## Usage
Although CCreate  does nothing with any flags you pass in currently, when finished you will use 
```console
ccreate init <project_name>
```
to create a folder with src and build directorys, with a hello world program already set up for you in C++. You will also be able to change the language using the flag for the respective language

| Language | flag |
| :--- | :--- |
| C | -c (short for Sharp)  | 
| C# | -s |
| Java | -j |
| Python | -p |
