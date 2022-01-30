result=$(make arg=129)

if [ $result = "true" ]; then
  echo "Test passed!"
else
  echo "Test failed :(" && exit 1
fi
