N = gets.to_i
store = Array.new(N) {gets.split.map(&:to_i)}
min = 10**9+1
store.each do |n|
  if n[0] >= n[2]
    next
  else
    min = n[1] if n[1] < min
  end
end
if min == 10**9+1
  puts -1
else
  puts min
end