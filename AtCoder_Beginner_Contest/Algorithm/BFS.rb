require 'thread'

N, M = gets.split.map(&:to_i)
graph = Array.new(N) {Array.new}
M.times do
  box = gets.split.map(&:to_i)
  graph[box[0]] << box[1]
  graph[box[1]] << box[0]
end

dist = Array.new(N, -1)
que = Queue.new

dist[0] = 0
que.push(0)

until que.empty?
  v = que.pop
  graph[v].each do |nv|
    next if dist[nv] != -1
    dist[nv] = dist[v]+1
    que.push(nv)
  end
end