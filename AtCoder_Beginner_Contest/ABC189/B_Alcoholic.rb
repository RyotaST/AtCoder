N, X = gets.split.map(&:to_i)
alcohol = Array.new(N){gets.split.map(&:to_i)}
count = 0
sum = 0

alcohol.each do |n|
  sum += (n[0].rationalize)*(n[1].rationalize/100r)
  count += 1
  p sum
  if sum.to_f > X
    p count
    exit
  end
end

puts (-1)