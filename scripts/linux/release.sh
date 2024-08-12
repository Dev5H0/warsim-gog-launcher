buildPath=build/$1
mkdir $buildPath
. scripts/compile.sh
cp out/WarsimLauncher.exe $buildPath/WarsimLauncher.exe
cp README.md $buildPath/README.md
zip -r -b release/WLv$1.zip "$buildPath/README.md" "$buildPath/WarsimLauncher.exe"
