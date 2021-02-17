N = gets.to_i
a = gets.split.map(&:to_i)
count = 0
max = a[0]
s = Array.new(N+1) {0}
t = Array.new(N+1) {0}
if N > 1
  0.upto(a.size-1) do |n|
    s[n+1] = s[n] + a[n]
    t[n+1] = t[n] + s[n+1]
    if t[n+1] >= max
      max = t[n+1]
      count = n+1
    end
  end
else
  puts (a[0] >= 0) ? a[0] : 0
  exit
end

if count == a.size
  if t[count-1]+s[0..(count-1)].max > t[count]
    puts t[count-1]+s[0..(count-1)].max
    exit
  else
    puts t[count]
    exit
  end
end
  
puts (t[count]+s[0..count].max) >= 0 ? (t[count]+s[0..count].max) : 0