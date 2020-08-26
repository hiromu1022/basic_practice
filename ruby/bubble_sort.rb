puts "before"
k = 0
array = [30,10,50,20,60,100,900,40,1]
puts array
while k < array.length - 1
  i = 0
  while i < array.length - 1
    if array[i] > array[i+1]
      w = array[i]
      array[i] = array[i+1]
      array[i+1] = w
    end
    i += 1
  end
  k += 1
end
puts "after"
puts array
