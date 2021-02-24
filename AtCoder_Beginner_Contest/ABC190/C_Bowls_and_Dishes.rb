N, M = gets.split.map(&:to_i)
conditions = Array.new(M) {gets.split.map(&:to_i)}
K = gets.to_i
max = 0
actions = Array.new(K) {gets.split.map(&:to_i)}

pattern = actions[0].product(*actions[1..-1])

pattern.each do |n1|
  count = 0
  conditions.each do |n2|
    count += 1 if n1.include?(n2[0]) && n1.include?(n2[1])
  end
  max = count if count > max
end

p count