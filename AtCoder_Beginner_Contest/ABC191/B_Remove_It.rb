N, X = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
a.delete(X)
puts a.join(" ")