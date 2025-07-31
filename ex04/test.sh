#!/bin/bash

echo -e "\n"

./exec/replace test1.txt Monsieur Madame
cat files/test1.txt.replace

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace test2.txt "M. de Rênal" Jean
cat files/test2.txt.replace

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace test3.txt tonte "en effet c'est moins joli"
cat files/test3.txt.replace

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace test4.txt "Dans une petite ville de l’Aveyron ou des Pyrénées" "Dans la grande ville de Paris"
cat files/test4.txt.replace

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace test5.txt " " YATAAAA
cat files/test5.txt.replace

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace test6.txt "" Bonjour

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace test7.txt Bonjour

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace test9.txt bonjour je suis la coucou pas la

echo -e "\n--------------------------------------------------------------------\n"

./exec/replace dontexist.txt Julien Theo

echo -e "\n"

exit 0
