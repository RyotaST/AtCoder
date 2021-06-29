N = gets.to_i
works = Array.new(N){gets.split.map(&:to_i)}
p N, works