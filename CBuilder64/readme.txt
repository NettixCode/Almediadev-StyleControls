To get 64-bit application under C++Builder:

1. Install 32-bit package.
2. Create folder for 64-bit sources and copy all sources to it.
3. Copy package files from specific folder to folder with sources.
4. Open package and "Build" it (you get compiled 64-bit sources).
5. Add folder with 64-bit compliled sources to the "Library path" options 
6. Add folder with 64-bit compliled sources to the "System Include Path" options
7. Open project and set platfrom to Windows 64-bit
8. Open project options and disabled Packages > Runtime packages > Link with runtime packages option
9. Run application