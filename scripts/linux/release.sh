buildPath=build/$1
mkdir -p $buildPath
. scripts/linux/compile.sh
cp out/WarsimLauncher.exe $buildPath/WarsimLauncher.exe
cp README.md $buildPath/README.md
zip -r -j release/$1.zip $buildPath/*
