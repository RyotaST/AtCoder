require 'thread'

H, W = gets.split.map(&:to_i)
C = gets.split.map(&:to_i)
D = gets.split.map(&:to_i)
field = []
H.times do |n1|
  field.push(gets.chomp.chars)
end

graph = Array.new(N) {Array.new}
graph[box[0]] << box[1]
graph[box[1]] << box[0]

dist = Array.new(N) {Array.new}
que1 = Queue.new
que2 = Queue.new

dist[C[0]-1][C[1]-1] = 0
que1.push(C)
que2.push(C)

until que1.empty?
  v = que1.pop
  que2.push(v)
  graph[v].each do |nv|
    next if dist[nv] != -1
    dist[nv] = dist[v]+1
    que.push(nv)
  end
end