N = gets.to_i
ary = []
result = 0
N.times{ary.push(*gets.split.map(&:to_i))}

ary.each_slice(2) do |n|
  result += (n[0]..n[1]).sum
end

p result