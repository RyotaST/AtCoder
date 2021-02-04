N = gets.to_i
count = 0
result = 'No'
N.times do
  gets.split.map(&:to_i).each_cons(2){|a,b| a == b ? count+=1 : count=0}
  if count == 3
    result = 'Yes'
    break
  end
end

puts result