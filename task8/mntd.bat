cl -c ./task7_func.c  ./task7_main.c
lib /OUT:task8_lib.lib ./task7_func.obj
link ./Task7_main.obj ./task8_lib.lib
Task7_main.exe
