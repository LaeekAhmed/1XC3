
#!/bin/bash  
# This is a comment! 

var1="python"  # assigning value to variable (no spaces!)
echo "I learned $var1" # returns I learned python
echo '$var1' # returns $var
echo $0 $1   # returns script's name

echo $? # exit status of the last executed cmnd, 0 - success else Failure
echo "no. of arg : $#"
# echo "Usage -- `basename $0` <infile> <outfile> <search1> <search2>"  

# for loop type1;
list=(1 2 3)
for i in "${list[@]}";
do  
    echo "hello noob $i"
done

# stores return value of the cmd: ls starter ($(ls) = `ls`)
for i in $(ls starter); 
do  
    echo -n "$i is in starter, "
done
echo ""

# for loop type2;
for ((c=1; c<=3; c++))
do
  echo -n "$c "
done
echo

# (nested) if statements;
i=12
j=13

if [ $i -lt $j ] # spacing matters!
then
  echo "$i is greater than $j"
elif [ $i -eq 12 ] 
then 
    echo "noob"
else 
  if [ $i -eq $j ]
  then 
    echo "i is equal to j"
  else 
    echo "i is less than j"
  fi
fi

# will "cat" both the files to show differences (if any)
if diff if.sh for.sh
then
  echo "Files are the same"
else 
  echo "Files are not the same"
fi

# user input
echo -n "Enter a no. : "
read VAR 

if [[ $VAR -gt 10 ]]
then 
    echo "$VAR is > 10"
else
    echo "$VAR is < 10"
fi