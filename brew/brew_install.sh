#!/bin/bash

if ! which brew > /dev/null; then
     echo "Installing Homebrew"
     /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
fi;

cd "$(dirname "$0")"

brew update
brew upgrade
brew bundle --file=Brewfile

[ -f /usr/local/bin/sha256sum ] || ln -s /usr/local/bin/gsha256sum /usr/local/bin/sha256sum

brew cleanup