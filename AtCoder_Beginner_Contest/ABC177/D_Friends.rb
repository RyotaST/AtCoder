N,M = gets.split.map(&:to_i)
friends = Array.new(M){gets.split.map(&:to_i)}
max = 0

graph = Array.new(N){Array.new}

friends.each do |n|
  graph[n[0]-1] << n[1]
  graph[n[1]-1] << n[0]
end

que = []
dist = Array.new(N){-1}

graph.each_with_index do |n1, index|
  if dist[index] != -1
    next
  elsif n1.empty?
    dist[index] = 1
    max = 1 if max == 0
  else
    count = 0
    que << index
    until que.empty?
      v = que.pop
      count += 1 if dist[v] == -1
      next if dist[v] != -1
      dist[v] = 1
      next if graph[v].empty?
      graph[v].each do |n2|
        next if dist[n2-1] != -1
        que << n2-1
      end
    end
    max = count if count > max
  end
end

puts max