# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run-test.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 10:51:12 by susami            #+#    #+#              #
#    Updated: 2022/04/11 22:54:30 by kyuzu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

git_clone_if_none()
{
	if [ ! -d $LOCALREPO ]
	then
		git clone $REPOSRC $LOCALREPO
	fi
}

INITIAL_DIR=$(pwd)
echo "Tests by 'libft-unit-test'"
cd ..
REPOSRC=https://github.com/alelievr/libft-unit-test.git
LOCALREPO=libft-unit-test
git_clone_if_none
cd $LOCALREPO
make f
cd $INITIAL_DIR
echo $(pwd)
echo "Tests by 'libftTester'"
REPOSRC=https://github.com/Tripouille/libftTester.git
LOCALREPO=libftTester
git_clone_if_none
cd $LOCALREPO
make m
