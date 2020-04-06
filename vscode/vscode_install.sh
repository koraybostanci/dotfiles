#!/bin/bash

[ ! command code -v > /dev/null ]  && { echo 'Visual Studio Code not found.'; exit 2; }

for extension in `cat vscode_extensions`
do
    code --force --install-extension $extension
done