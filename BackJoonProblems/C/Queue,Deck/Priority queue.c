// 최대 우선순위 큐는 다음의 두 가지 연산을 지원하는 자료구조이다.
// 1. insert(x) : 새로운 원소 x삽입
// 2. extract_max() : 최대값을 삭제하고 반환
// 최소 우선순위 큐는 extract-max 대신 extract-min을 지원하느 자료구조이다
// max heap을 이용하여 최대 우선순위 큐를 구현한다.

max_heap_insert(a, key)
{
    heap_size = heap_size + 1;
    a[heap_size] = key;
    i = heap_size;
    while (i > 1 and a[parent(i)] < a[i])
    {
        exchange a[i] and a[parent(i)];
        i = parent(i);
    }
}