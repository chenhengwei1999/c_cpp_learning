# Configuration with VScode

## .vscode directory

**c_cpp_properties.json**

You can use `ctrl+shift+P` or `Command Palette` button below the `View` menu to open the `Command Palette` (*Notes: If you can't find the above button, you may need to upgrade vscode to a newer version.*). Then, type `C/C++: Edit Configuations (JSON)` to genetare `c_cpp_properties.json` automaticlly. Maybe it seems like this:

```Json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/clang",
            "cStandard": "c17",
            "cppStandard": "c++14",
            "intelliSenseMode": "linux-clang-x64"
        }
    ],
    "version": 4
}
```
