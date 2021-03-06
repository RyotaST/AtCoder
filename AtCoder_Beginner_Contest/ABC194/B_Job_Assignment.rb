N = gets.to_i
worker = Array.new(N){gets.split.map(&:to_i)}
max_a = [[10**5,0],[10**5,0]]
max_b = [[10**5,0],[10**5,0]]
result = []
count = 0
worker.each do |n|
  if n[0] < max_a[0][0]
    max_a[1][0] = max_a[0][0]
    max_a[1][1] = max_a[0][1]
    max_a[0][0] = n[0]
    max_a[0][1] = count
  elsif n[0] < max_a[1][0]
    max_a[1][0] = n[0]
    max_a[1][1] = count
  end
  if n[1] < max_b[0][0]
    max_b[1][0] = max_b[0][0]
    max_b[1][1] = max_b[0][1]
    max_b[0][0] = n[1]
    max_b[0][1] = count
  elsif n[1] < max_b[1][0]
    max_b[1][0] = n[1]
    max_b[1][1] = count
  end
  count+=1
end

if max_a[0][1] != max_b[0][1]
  puts (max_a[0][0] >= max_b[0][0]) ? max_a[0][0] : max_b[0][0]
elsif max_a[0][1] == max_b[0][1]
  judge1 = max_a[0][0] + max_b[0][0]
  judge2 = [[max_a[0][0],max_b[1][0]].max,[max_a[1][0],max_b[0][0]].max].min
  puts (judge1 <= judge2) ? judge1 : judge2
end