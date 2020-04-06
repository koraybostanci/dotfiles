# This script is sourced from .zshrc.

# Add GNU tools not linked by Homebrew.
alias find='gfind'
alias xargs='gxargs'
alias stat='gstat'

# convenience aliases
alias cd.='cd ..'
alias cd..='cd ../..'
alias cd...='cd ../../..'
alias ls='ls --color'
alias l='ls -lF'
alias la='ls -lah'
alias ll='ls -l'
alias j='jobs'
alias time='gtime --format "$(tput setab 255)$(tput setaf 160)took %es.$(tput sgr0)"'
alias vi='vim'
alias grep='grep -E --color'
alias ping='ping -c 3'
alias pstree='pstree -w'
alias c='pbcopy'
alias p='pbpaste'
alias pt='pbpaste | tee'
alias t='tee'
alias slp='/System/Library/CoreServices/"Menu Extras"/User.menu/Contents/Resources/CGSession -suspend'
alias pg='ps ax | grep -v "grep" | grep'
alias c.='code .'
alias code.='code .'

# homebrew
alias brewup="brew update && brew upgrade && brew doctor && brew cleanup"

# cloud
alias d='docker'

alias di='docker image'
alias dil='di ls'
alias dirm='di rm'
alias dil='di pull'

alias dc='docker container'
alias dcl='dc ls'
alias dcrm='dc rm -f'

alias dps='docker ps'
alias dr='docker run --rm -i -t'
alias drd='docker run -d'
alias dx='docker exec -i -t'
alias db='docker build -t'

# languages
alias python='python3'
alias pip='pip3'
alias java11='JAVA_HOME=$(/usr/libexec/java_home -v11)'

# git aliases
alias gc='_git_dbg commit -S -v -s'
alias gdc='_git_dbg diff --cached'
alias git='hub'
alias gpp='_git_dbg push ahmetb HEAD && hub pull-request --browse'
alias gpah='_git_dbg push ahmetb HEAD'
alias glah='_git_dbg pull ahmetb HEAD'
alias gfah='_git_dbg fetch ahmetb'
alias glom='_git_dbg pull origin master --tags'
alias gloh='_git_dbg pull origin HEAD --tags'
alias grom='_git_dbg rebase origin/master'
alias gpoh='_git_dbg push origin HEAD'

# kubectl
alias k='kubectl'
alias kx='kubectl explain'
alias kpl='kubectl plugin'
alias pka='pbpaste | kubectl apply -f-'
alias pkr='pbpaste | kubectl delete -f-'
alias pkd='pbpaste | kubectl describe -f-'

# misc shortcuts
alias ffmpeg='docker run --rm -i -t -v $PWD:/tmp/workdir jrottenberg/ffmpeg'
alias youtube-dl='docker run --rm -i -t -v $PWD:/data vimagick/youtube-dl'