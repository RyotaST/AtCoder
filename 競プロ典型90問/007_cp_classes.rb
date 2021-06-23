N = gets.to_i
a = gets.split.map(&:to_i)
Q = gets.to_i
j = Array.new(Q){gets.to_i}

a.sort!
j.each do |n|
  x = a.bsearch_index{|v| v-n >= 0}
  if x.nil?
    puts n-a[a.size-1]
  elsif x == 0
    puts a[x]-n
  elsif x > 0
    puts (n-a[x-1]).abs <= (n-a[x]).abs ? (n-a[x-1]).abs : (n-a[x]).abs
  end
end