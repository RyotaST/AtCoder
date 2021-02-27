require 'set'
sample = Set[1,2,3,4,5,6,7,8,9]
count_win = 0
t_count = 0
a_count = 0

K = gets.to_i
t = gets.chomp.chomp("#").chars.map(&:to_i)
a = gets.chomp.chomp("#").chars.map(&:to_i)

h_t = {"1" => 0, "2" => 0, "3" => 0, "4" => 0, "5" => 0, "6" => 0, "7" => 0, "8" => 0, "9" => 0}
h_a = {"1" => 0, "2" => 0, "3" => 0, "4" => 0, "5" => 0, "6" => 0, "7" => 0, "8" => 0, "9" => 0}

t.each do |n|
  h_t["#{n}"] = t.count(n)
end
a.each do |n|
  h_a["#{n}"] = a.count(n)
end

h_t.each do |key, value|
  sample.delete(key.to_i) if value == K
end
h_a.each do |key, value|
  sample.delete(key.to_i) if value == K
end

sample.each do |n1|
  t_count = K-t.count(n1)-a.count(n1)
  t << n1
  t_score = 0
  skip_num = 0
  h_t["#{n1}"] = t.count(n1)
  skip_num = n1 if h_t["#{n1}"] == K || h_a["#{n1}"] == K-1
  1.upto(9) do |x|
    t_score += x*10**(h_t["#{x}"])
  end
  sample.each do |n2|
    next if skip_num == n2
    a_count = K-a.count(n2)-t.count(n2)
    a << n2
    a_score = 0
    h_a["#{n2}"] = a.count(n2)
    1.upto(9) do |x|
      a_score += x*10**h_a["#{x}"]
    end
    count_win += (t_count)*(a_count)  if t_score > a_score
    a.delete_at(-1)
    h_a["#{n2}"] = a.count(n2)
  end
  t.delete_at(-1)
  h_t["#{n1}"] = t.count(n1)
end
p ((count_win.rationalize)/((9*K-8)*(9*K-9)).rationalize).to_f