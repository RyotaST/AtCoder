N = gets.to_i
a = gets.split.map(&:to_i)
count = 0
max = 0
s = Array.new(N+1) {0}
0.upto(a.size-1) do |n|
  s[n+1] = s[n] + a[n]
end
p a,s