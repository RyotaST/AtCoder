N = gets.to_i
ary = gets.split.map{|n| n.to_i.abs}
manhattan_distance = (ary.inject(0){|result, n| result+=n})
p manhattan_distance
euclidean_distance = Math.sqrt(ary.inject(0){|result, n| result+=n**2})
p euclidean_distance
chebyshev_distance = ary.max.to_i
p chebyshev_distance