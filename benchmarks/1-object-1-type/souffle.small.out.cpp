
#include "souffle/CompiledSouffle.h"
#include <mutex>
#include "souffle/Explain.h"

extern "C" {
}

namespace souffle {
using namespace ram;
struct t_btree_3__0_1_2__1__7 {
using t_tuple = Tuple<RamDomain, 3>;
struct updater_t_btree_3__0_1_2__1__7 {
void update(t_tuple& old_t, const t_tuple& new_t) {
old_t[1] = new_t[1];
old_t[2] = new_t[2];
}
};
using t_ind_0 = btree_set<t_tuple, index_utils::comparator<0,1,2>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<0>, updater_t_btree_3__0_1_2__1__7>;
t_ind_0 ind_0;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0;
};
context createContext() { return context(); }
bool insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0)) {
return true;
} else return false;
}
bool insert(const RamDomain* ramDomain) {
RamDomain data[3];
std::copy(ramDomain, ramDomain + 3, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool insert(RamDomain a0,RamDomain a1,RamDomain a2) {
RamDomain data[3] = {a0,a1,a2};
return insert(data);
}
template <typename T>
void insertAll(T& other) {
for (auto const& cur : other) {
insert(cur);
}
}
void insertAll(t_btree_3__0_1_2__1__7& other) {
ind_0.insertAll(other.ind_0);
}
bool contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0);
}
bool contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t size() const {
return ind_0.size();
}
iterator find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0);
}
iterator find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> equalRange_0(const t_tuple& t, context& h) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> equalRange_0(const t_tuple& t) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> equalRange_1(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[1] = MIN_RAM_DOMAIN;
high[1] = MAX_RAM_DOMAIN;
low[2] = MIN_RAM_DOMAIN;
high[2] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_1(const t_tuple& t) const {
context h;
return equalRange_1(t, h);
}
range<t_ind_0::iterator> equalRange_7(const t_tuple& t, context& h) const {
auto pos = ind_0.find(t, h.hints_0);
auto fin = ind_0.end();
if (pos != fin) {fin = pos; ++fin;}
return make_range(pos, fin);
}
range<t_ind_0::iterator> equalRange_7(const t_tuple& t) const {
context h;
return equalRange_7(t, h);
}
bool empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> partition() const {
return ind_0.getChunks(400);
}
void purge() {
ind_0.clear();
}
iterator begin() const {
return ind_0.begin();
}
iterator end() const {
return ind_0.end();
}
void printHintStatistics(std::ostream& o, const std::string prefix) const {
const auto& stats_0 = ind_0.getHintStatistics();
o << prefix << "arity 3 direct b-tree index [0,1,2]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_0.inserts.getHits() << "/" << stats_0.inserts.getMisses() << "/" << stats_0.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_0.contains.getHits() << "/" << stats_0.contains.getMisses() << "/" << stats_0.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_0.lower_bound.getHits() << "/" << stats_0.lower_bound.getMisses() << "/" << stats_0.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_0.upper_bound.getHits() << "/" << stats_0.upper_bound.getMisses() << "/" << stats_0.upper_bound.getAccesses() << "\n";
}
};
struct t_btree_5__0_2_1_3_4__5__31 {
using t_tuple = Tuple<RamDomain, 5>;
struct updater_t_btree_5__0_2_1_3_4__5__31 {
void update(t_tuple& old_t, const t_tuple& new_t) {
old_t[3] = new_t[3];
old_t[4] = new_t[4];
}
};
using t_ind_0 = btree_set<t_tuple, index_utils::comparator<0,2,1,3,4>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<0,2,1>, updater_t_btree_5__0_2_1_3_4__5__31>;
t_ind_0 ind_0;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0;
};
context createContext() { return context(); }
bool insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0)) {
return true;
} else return false;
}
bool insert(const RamDomain* ramDomain) {
RamDomain data[5];
std::copy(ramDomain, ramDomain + 5, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3,RamDomain a4) {
RamDomain data[5] = {a0,a1,a2,a3,a4};
return insert(data);
}
template <typename T>
void insertAll(T& other) {
for (auto const& cur : other) {
insert(cur);
}
}
void insertAll(t_btree_5__0_2_1_3_4__5__31& other) {
ind_0.insertAll(other.ind_0);
}
bool contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0);
}
bool contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t size() const {
return ind_0.size();
}
iterator find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0);
}
iterator find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> equalRange_0(const t_tuple& t, context& h) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> equalRange_0(const t_tuple& t) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> equalRange_5(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[1] = MIN_RAM_DOMAIN;
high[1] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
low[4] = MIN_RAM_DOMAIN;
high[4] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_5(const t_tuple& t) const {
context h;
return equalRange_5(t, h);
}
range<t_ind_0::iterator> equalRange_31(const t_tuple& t, context& h) const {
auto pos = ind_0.find(t, h.hints_0);
auto fin = ind_0.end();
if (pos != fin) {fin = pos; ++fin;}
return make_range(pos, fin);
}
range<t_ind_0::iterator> equalRange_31(const t_tuple& t) const {
context h;
return equalRange_31(t, h);
}
bool empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> partition() const {
return ind_0.getChunks(400);
}
void purge() {
ind_0.clear();
}
iterator begin() const {
return ind_0.begin();
}
iterator end() const {
return ind_0.end();
}
void printHintStatistics(std::ostream& o, const std::string prefix) const {
const auto& stats_0 = ind_0.getHintStatistics();
o << prefix << "arity 5 direct b-tree index [0,2,1,3,4]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_0.inserts.getHits() << "/" << stats_0.inserts.getMisses() << "/" << stats_0.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_0.contains.getHits() << "/" << stats_0.contains.getMisses() << "/" << stats_0.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_0.lower_bound.getHits() << "/" << stats_0.lower_bound.getMisses() << "/" << stats_0.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_0.upper_bound.getHits() << "/" << stats_0.upper_bound.getMisses() << "/" << stats_0.upper_bound.getAccesses() << "\n";
}
};
struct t_btree_4__0_1_3_2__1_0_2_3__1__2__3__15 {
using t_tuple = Tuple<RamDomain, 4>;
struct updater_t_btree_4__0_1_3_2__1_0_2_3__1__2__3__15 {
void update(t_tuple& old_t, const t_tuple& new_t) {
old_t[2] = new_t[2];
old_t[3] = new_t[3];
}
};
using t_ind_0 = btree_set<t_tuple, index_utils::comparator<0,1,3,2>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<0,1>, updater_t_btree_4__0_1_3_2__1_0_2_3__1__2__3__15>;
t_ind_0 ind_0;
using t_ind_1 = btree_set<t_tuple, index_utils::comparator<1,0,2,3>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<1,0>, updater_t_btree_4__0_1_3_2__1_0_2_3__1__2__3__15>;
t_ind_1 ind_1;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0;
t_ind_1::operation_hints hints_1;
};
context createContext() { return context(); }
bool insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0)) {
ind_1.insert(t, h.hints_1);
return true;
} else return false;
}
bool insert(const RamDomain* ramDomain) {
RamDomain data[4];
std::copy(ramDomain, ramDomain + 4, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3) {
RamDomain data[4] = {a0,a1,a2,a3};
return insert(data);
}
template <typename T>
void insertAll(T& other) {
for (auto const& cur : other) {
insert(cur);
}
}
void insertAll(t_btree_4__0_1_3_2__1_0_2_3__1__2__3__15& other) {
ind_0.insertAll(other.ind_0);
ind_1.insertAll(other.ind_1);
}
bool contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0);
}
bool contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t size() const {
return ind_0.size();
}
iterator find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0);
}
iterator find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> equalRange_0(const t_tuple& t, context& h) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> equalRange_0(const t_tuple& t) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> equalRange_1(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[1] = MIN_RAM_DOMAIN;
high[1] = MAX_RAM_DOMAIN;
low[2] = MIN_RAM_DOMAIN;
high[2] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_1(const t_tuple& t) const {
context h;
return equalRange_1(t, h);
}
range<t_ind_1::iterator> equalRange_2(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[0] = MIN_RAM_DOMAIN;
high[0] = MAX_RAM_DOMAIN;
low[2] = MIN_RAM_DOMAIN;
high[2] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
return make_range(ind_1.lower_bound(low, h.hints_1), ind_1.upper_bound(high, h.hints_1));
}
range<t_ind_1::iterator> equalRange_2(const t_tuple& t) const {
context h;
return equalRange_2(t, h);
}
range<t_ind_0::iterator> equalRange_3(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[2] = MIN_RAM_DOMAIN;
high[2] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_3(const t_tuple& t) const {
context h;
return equalRange_3(t, h);
}
range<t_ind_1::iterator> equalRange_15(const t_tuple& t, context& h) const {
auto pos = ind_1.find(t, h.hints_1);
auto fin = ind_1.end();
if (pos != fin) {fin = pos; ++fin;}
return make_range(pos, fin);
}
range<t_ind_1::iterator> equalRange_15(const t_tuple& t) const {
context h;
return equalRange_15(t, h);
}
bool empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> partition() const {
return ind_0.getChunks(400);
}
void purge() {
ind_0.clear();
ind_1.clear();
}
iterator begin() const {
return ind_0.begin();
}
iterator end() const {
return ind_0.end();
}
void printHintStatistics(std::ostream& o, const std::string prefix) const {
const auto& stats_0 = ind_0.getHintStatistics();
o << prefix << "arity 4 direct b-tree index [0,1,3,2]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_0.inserts.getHits() << "/" << stats_0.inserts.getMisses() << "/" << stats_0.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_0.contains.getHits() << "/" << stats_0.contains.getMisses() << "/" << stats_0.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_0.lower_bound.getHits() << "/" << stats_0.lower_bound.getMisses() << "/" << stats_0.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_0.upper_bound.getHits() << "/" << stats_0.upper_bound.getMisses() << "/" << stats_0.upper_bound.getAccesses() << "\n";
const auto& stats_1 = ind_1.getHintStatistics();
o << prefix << "arity 4 direct b-tree index [1,0,2,3]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_1.inserts.getHits() << "/" << stats_1.inserts.getMisses() << "/" << stats_1.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_1.contains.getHits() << "/" << stats_1.contains.getMisses() << "/" << stats_1.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_1.lower_bound.getHits() << "/" << stats_1.lower_bound.getMisses() << "/" << stats_1.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_1.upper_bound.getHits() << "/" << stats_1.upper_bound.getMisses() << "/" << stats_1.upper_bound.getAccesses() << "\n";
}
};
struct t_btree_4__0_1_2_3__1__3__15 {
using t_tuple = Tuple<RamDomain, 4>;
struct updater_t_btree_4__0_1_2_3__1__3__15 {
void update(t_tuple& old_t, const t_tuple& new_t) {
old_t[2] = new_t[2];
old_t[3] = new_t[3];
}
};
using t_ind_0 = btree_set<t_tuple, index_utils::comparator<0,1,2,3>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<0,1>, updater_t_btree_4__0_1_2_3__1__3__15>;
t_ind_0 ind_0;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0;
};
context createContext() { return context(); }
bool insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0)) {
return true;
} else return false;
}
bool insert(const RamDomain* ramDomain) {
RamDomain data[4];
std::copy(ramDomain, ramDomain + 4, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3) {
RamDomain data[4] = {a0,a1,a2,a3};
return insert(data);
}
template <typename T>
void insertAll(T& other) {
for (auto const& cur : other) {
insert(cur);
}
}
void insertAll(t_btree_4__0_1_2_3__1__3__15& other) {
ind_0.insertAll(other.ind_0);
}
bool contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0);
}
bool contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t size() const {
return ind_0.size();
}
iterator find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0);
}
iterator find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> equalRange_0(const t_tuple& t, context& h) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> equalRange_0(const t_tuple& t) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> equalRange_1(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[1] = MIN_RAM_DOMAIN;
high[1] = MAX_RAM_DOMAIN;
low[2] = MIN_RAM_DOMAIN;
high[2] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_1(const t_tuple& t) const {
context h;
return equalRange_1(t, h);
}
range<t_ind_0::iterator> equalRange_3(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[2] = MIN_RAM_DOMAIN;
high[2] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_3(const t_tuple& t) const {
context h;
return equalRange_3(t, h);
}
range<t_ind_0::iterator> equalRange_15(const t_tuple& t, context& h) const {
auto pos = ind_0.find(t, h.hints_0);
auto fin = ind_0.end();
if (pos != fin) {fin = pos; ++fin;}
return make_range(pos, fin);
}
range<t_ind_0::iterator> equalRange_15(const t_tuple& t) const {
context h;
return equalRange_15(t, h);
}
bool empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> partition() const {
return ind_0.getChunks(400);
}
void purge() {
ind_0.clear();
}
iterator begin() const {
return ind_0.begin();
}
iterator end() const {
return ind_0.end();
}
void printHintStatistics(std::ostream& o, const std::string prefix) const {
const auto& stats_0 = ind_0.getHintStatistics();
o << prefix << "arity 4 direct b-tree index [0,1,2,3]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_0.inserts.getHits() << "/" << stats_0.inserts.getMisses() << "/" << stats_0.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_0.contains.getHits() << "/" << stats_0.contains.getMisses() << "/" << stats_0.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_0.lower_bound.getHits() << "/" << stats_0.lower_bound.getMisses() << "/" << stats_0.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_0.upper_bound.getHits() << "/" << stats_0.upper_bound.getMisses() << "/" << stats_0.upper_bound.getAccesses() << "\n";
}
};
struct t_btree_5__2_0_1_3_4__4__5__31 {
using t_tuple = Tuple<RamDomain, 5>;
struct updater_t_btree_5__2_0_1_3_4__4__5__31 {
void update(t_tuple& old_t, const t_tuple& new_t) {
old_t[3] = new_t[3];
old_t[4] = new_t[4];
}
};
using t_ind_0 = btree_set<t_tuple, index_utils::comparator<2,0,1,3,4>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<2,0,1>, updater_t_btree_5__2_0_1_3_4__4__5__31>;
t_ind_0 ind_0;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0;
};
context createContext() { return context(); }
bool insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0)) {
return true;
} else return false;
}
bool insert(const RamDomain* ramDomain) {
RamDomain data[5];
std::copy(ramDomain, ramDomain + 5, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3,RamDomain a4) {
RamDomain data[5] = {a0,a1,a2,a3,a4};
return insert(data);
}
template <typename T>
void insertAll(T& other) {
for (auto const& cur : other) {
insert(cur);
}
}
void insertAll(t_btree_5__2_0_1_3_4__4__5__31& other) {
ind_0.insertAll(other.ind_0);
}
bool contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0);
}
bool contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t size() const {
return ind_0.size();
}
iterator find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0);
}
iterator find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> equalRange_0(const t_tuple& t, context& h) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> equalRange_0(const t_tuple& t) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> equalRange_4(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[0] = MIN_RAM_DOMAIN;
high[0] = MAX_RAM_DOMAIN;
low[1] = MIN_RAM_DOMAIN;
high[1] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
low[4] = MIN_RAM_DOMAIN;
high[4] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_4(const t_tuple& t) const {
context h;
return equalRange_4(t, h);
}
range<t_ind_0::iterator> equalRange_5(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[1] = MIN_RAM_DOMAIN;
high[1] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
low[4] = MIN_RAM_DOMAIN;
high[4] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_5(const t_tuple& t) const {
context h;
return equalRange_5(t, h);
}
range<t_ind_0::iterator> equalRange_31(const t_tuple& t, context& h) const {
auto pos = ind_0.find(t, h.hints_0);
auto fin = ind_0.end();
if (pos != fin) {fin = pos; ++fin;}
return make_range(pos, fin);
}
range<t_ind_0::iterator> equalRange_31(const t_tuple& t) const {
context h;
return equalRange_31(t, h);
}
bool empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> partition() const {
return ind_0.getChunks(400);
}
void purge() {
ind_0.clear();
}
iterator begin() const {
return ind_0.begin();
}
iterator end() const {
return ind_0.end();
}
void printHintStatistics(std::ostream& o, const std::string prefix) const {
const auto& stats_0 = ind_0.getHintStatistics();
o << prefix << "arity 5 direct b-tree index [2,0,1,3,4]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_0.inserts.getHits() << "/" << stats_0.inserts.getMisses() << "/" << stats_0.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_0.contains.getHits() << "/" << stats_0.contains.getMisses() << "/" << stats_0.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_0.lower_bound.getHits() << "/" << stats_0.lower_bound.getMisses() << "/" << stats_0.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_0.upper_bound.getHits() << "/" << stats_0.upper_bound.getMisses() << "/" << stats_0.upper_bound.getAccesses() << "\n";
}
};
struct t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31 {
using t_tuple = Tuple<RamDomain, 5>;
struct updater_t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31 {
void update(t_tuple& old_t, const t_tuple& new_t) {
old_t[3] = new_t[3];
old_t[4] = new_t[4];
}
};
using t_ind_0 = btree_set<t_tuple, index_utils::comparator<1,2,0,4,3>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<1,2,0>, updater_t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31>;
t_ind_0 ind_0;
using t_ind_1 = btree_set<t_tuple, index_utils::comparator<0,1,2,4,3>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<0,1,2>, updater_t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31>;
t_ind_1 ind_1;
using t_ind_2 = btree_set<t_tuple, index_utils::comparator<0,2,1,3,4>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<0,2,1>, updater_t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31>;
t_ind_2 ind_2;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0;
t_ind_1::operation_hints hints_1;
t_ind_2::operation_hints hints_2;
};
context createContext() { return context(); }
bool insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0)) {
ind_1.insert(t, h.hints_1);
ind_2.insert(t, h.hints_2);
return true;
} else return false;
}
bool insert(const RamDomain* ramDomain) {
RamDomain data[5];
std::copy(ramDomain, ramDomain + 5, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3,RamDomain a4) {
RamDomain data[5] = {a0,a1,a2,a3,a4};
return insert(data);
}
template <typename T>
void insertAll(T& other) {
for (auto const& cur : other) {
insert(cur);
}
}
void insertAll(t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31& other) {
ind_0.insertAll(other.ind_0);
ind_1.insertAll(other.ind_1);
ind_2.insertAll(other.ind_2);
}
bool contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0);
}
bool contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t size() const {
return ind_0.size();
}
iterator find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0);
}
iterator find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> equalRange_0(const t_tuple& t, context& h) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> equalRange_0(const t_tuple& t) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_1::iterator> equalRange_3(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[2] = MIN_RAM_DOMAIN;
high[2] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
low[4] = MIN_RAM_DOMAIN;
high[4] = MAX_RAM_DOMAIN;
return make_range(ind_1.lower_bound(low, h.hints_1), ind_1.upper_bound(high, h.hints_1));
}
range<t_ind_1::iterator> equalRange_3(const t_tuple& t) const {
context h;
return equalRange_3(t, h);
}
range<t_ind_2::iterator> equalRange_5(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[1] = MIN_RAM_DOMAIN;
high[1] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
low[4] = MIN_RAM_DOMAIN;
high[4] = MAX_RAM_DOMAIN;
return make_range(ind_2.lower_bound(low, h.hints_2), ind_2.upper_bound(high, h.hints_2));
}
range<t_ind_2::iterator> equalRange_5(const t_tuple& t) const {
context h;
return equalRange_5(t, h);
}
range<t_ind_0::iterator> equalRange_6(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[0] = MIN_RAM_DOMAIN;
high[0] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
low[4] = MIN_RAM_DOMAIN;
high[4] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_6(const t_tuple& t) const {
context h;
return equalRange_6(t, h);
}
range<t_ind_1::iterator> equalRange_7(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
low[4] = MIN_RAM_DOMAIN;
high[4] = MAX_RAM_DOMAIN;
return make_range(ind_1.lower_bound(low, h.hints_1), ind_1.upper_bound(high, h.hints_1));
}
range<t_ind_1::iterator> equalRange_7(const t_tuple& t) const {
context h;
return equalRange_7(t, h);
}
range<t_ind_2::iterator> equalRange_31(const t_tuple& t, context& h) const {
auto pos = ind_2.find(t, h.hints_2);
auto fin = ind_2.end();
if (pos != fin) {fin = pos; ++fin;}
return make_range(pos, fin);
}
range<t_ind_2::iterator> equalRange_31(const t_tuple& t) const {
context h;
return equalRange_31(t, h);
}
bool empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> partition() const {
return ind_0.getChunks(400);
}
void purge() {
ind_0.clear();
ind_1.clear();
ind_2.clear();
}
iterator begin() const {
return ind_0.begin();
}
iterator end() const {
return ind_0.end();
}
void printHintStatistics(std::ostream& o, const std::string prefix) const {
const auto& stats_0 = ind_0.getHintStatistics();
o << prefix << "arity 5 direct b-tree index [1,2,0,4,3]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_0.inserts.getHits() << "/" << stats_0.inserts.getMisses() << "/" << stats_0.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_0.contains.getHits() << "/" << stats_0.contains.getMisses() << "/" << stats_0.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_0.lower_bound.getHits() << "/" << stats_0.lower_bound.getMisses() << "/" << stats_0.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_0.upper_bound.getHits() << "/" << stats_0.upper_bound.getMisses() << "/" << stats_0.upper_bound.getAccesses() << "\n";
const auto& stats_1 = ind_1.getHintStatistics();
o << prefix << "arity 5 direct b-tree index [0,1,2,4,3]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_1.inserts.getHits() << "/" << stats_1.inserts.getMisses() << "/" << stats_1.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_1.contains.getHits() << "/" << stats_1.contains.getMisses() << "/" << stats_1.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_1.lower_bound.getHits() << "/" << stats_1.lower_bound.getMisses() << "/" << stats_1.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_1.upper_bound.getHits() << "/" << stats_1.upper_bound.getMisses() << "/" << stats_1.upper_bound.getAccesses() << "\n";
const auto& stats_2 = ind_2.getHintStatistics();
o << prefix << "arity 5 direct b-tree index [0,2,1,3,4]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_2.inserts.getHits() << "/" << stats_2.inserts.getMisses() << "/" << stats_2.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_2.contains.getHits() << "/" << stats_2.contains.getMisses() << "/" << stats_2.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_2.lower_bound.getHits() << "/" << stats_2.lower_bound.getMisses() << "/" << stats_2.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_2.upper_bound.getHits() << "/" << stats_2.upper_bound.getMisses() << "/" << stats_2.upper_bound.getAccesses() << "\n";
}
};
struct t_btree_5__1_0_2_3_4__2__31 {
using t_tuple = Tuple<RamDomain, 5>;
struct updater_t_btree_5__1_0_2_3_4__2__31 {
void update(t_tuple& old_t, const t_tuple& new_t) {
old_t[3] = new_t[3];
old_t[4] = new_t[4];
}
};
using t_ind_0 = btree_set<t_tuple, index_utils::comparator<1,0,2,3,4>, std::allocator<t_tuple>, 256, typename souffle::detail::default_strategy<t_tuple>::type, index_utils::comparator<1,0,2>, updater_t_btree_5__1_0_2_3_4__2__31>;
t_ind_0 ind_0;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0;
};
context createContext() { return context(); }
bool insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0)) {
return true;
} else return false;
}
bool insert(const RamDomain* ramDomain) {
RamDomain data[5];
std::copy(ramDomain, ramDomain + 5, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3,RamDomain a4) {
RamDomain data[5] = {a0,a1,a2,a3,a4};
return insert(data);
}
template <typename T>
void insertAll(T& other) {
for (auto const& cur : other) {
insert(cur);
}
}
void insertAll(t_btree_5__1_0_2_3_4__2__31& other) {
ind_0.insertAll(other.ind_0);
}
bool contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0);
}
bool contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t size() const {
return ind_0.size();
}
iterator find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0);
}
iterator find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> equalRange_0(const t_tuple& t, context& h) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> equalRange_0(const t_tuple& t) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> equalRange_2(const t_tuple& t, context& h) const {
t_tuple low(t); t_tuple high(t);
low[0] = MIN_RAM_DOMAIN;
high[0] = MAX_RAM_DOMAIN;
low[2] = MIN_RAM_DOMAIN;
high[2] = MAX_RAM_DOMAIN;
low[3] = MIN_RAM_DOMAIN;
high[3] = MAX_RAM_DOMAIN;
low[4] = MIN_RAM_DOMAIN;
high[4] = MAX_RAM_DOMAIN;
return make_range(ind_0.lower_bound(low, h.hints_0), ind_0.upper_bound(high, h.hints_0));
}
range<t_ind_0::iterator> equalRange_2(const t_tuple& t) const {
context h;
return equalRange_2(t, h);
}
range<t_ind_0::iterator> equalRange_31(const t_tuple& t, context& h) const {
auto pos = ind_0.find(t, h.hints_0);
auto fin = ind_0.end();
if (pos != fin) {fin = pos; ++fin;}
return make_range(pos, fin);
}
range<t_ind_0::iterator> equalRange_31(const t_tuple& t) const {
context h;
return equalRange_31(t, h);
}
bool empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> partition() const {
return ind_0.getChunks(400);
}
void purge() {
ind_0.clear();
}
iterator begin() const {
return ind_0.begin();
}
iterator end() const {
return ind_0.end();
}
void printHintStatistics(std::ostream& o, const std::string prefix) const {
const auto& stats_0 = ind_0.getHintStatistics();
o << prefix << "arity 5 direct b-tree index [1,0,2,3,4]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_0.inserts.getHits() << "/" << stats_0.inserts.getMisses() << "/" << stats_0.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_0.contains.getHits() << "/" << stats_0.contains.getMisses() << "/" << stats_0.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_0.lower_bound.getHits() << "/" << stats_0.lower_bound.getMisses() << "/" << stats_0.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_0.upper_bound.getHits() << "/" << stats_0.upper_bound.getMisses() << "/" << stats_0.upper_bound.getAccesses() << "\n";
}
};
struct t_btree_6__0_1_2_3_4_5__63 {
using t_tuple = Tuple<RamDomain, 6>;
using t_ind_0 = btree_set<t_tuple, index_utils::comparator<0,1,2,3,4,5>>;
t_ind_0 ind_0;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0;
};
context createContext() { return context(); }
bool insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0)) {
return true;
} else return false;
}
bool insert(const RamDomain* ramDomain) {
RamDomain data[6];
std::copy(ramDomain, ramDomain + 6, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3,RamDomain a4,RamDomain a5) {
RamDomain data[6] = {a0,a1,a2,a3,a4,a5};
return insert(data);
}
template <typename T>
void insertAll(T& other) {
for (auto const& cur : other) {
insert(cur);
}
}
void insertAll(t_btree_6__0_1_2_3_4_5__63& other) {
ind_0.insertAll(other.ind_0);
}
bool contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0);
}
bool contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t size() const {
return ind_0.size();
}
iterator find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0);
}
iterator find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> equalRange_0(const t_tuple& t, context& h) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> equalRange_0(const t_tuple& t) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> equalRange_63(const t_tuple& t, context& h) const {
auto pos = ind_0.find(t, h.hints_0);
auto fin = ind_0.end();
if (pos != fin) {fin = pos; ++fin;}
return make_range(pos, fin);
}
range<t_ind_0::iterator> equalRange_63(const t_tuple& t) const {
context h;
return equalRange_63(t, h);
}
bool empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> partition() const {
return ind_0.getChunks(400);
}
void purge() {
ind_0.clear();
}
iterator begin() const {
return ind_0.begin();
}
iterator end() const {
return ind_0.end();
}
void printHintStatistics(std::ostream& o, const std::string prefix) const {
const auto& stats_0 = ind_0.getHintStatistics();
o << prefix << "arity 6 direct b-tree index [0,1,2,3,4,5]: (hits/misses/total)\n";
o << prefix << "Insert: " << stats_0.inserts.getHits() << "/" << stats_0.inserts.getMisses() << "/" << stats_0.inserts.getAccesses() << "\n";
o << prefix << "Contains: " << stats_0.contains.getHits() << "/" << stats_0.contains.getMisses() << "/" << stats_0.contains.getAccesses() << "\n";
o << prefix << "Lower-bound: " << stats_0.lower_bound.getHits() << "/" << stats_0.lower_bound.getMisses() << "/" << stats_0.lower_bound.getAccesses() << "\n";
o << prefix << "Upper-bound: " << stats_0.upper_bound.getHits() << "/" << stats_0.upper_bound.getMisses() << "/" << stats_0.upper_bound.getAccesses() << "\n";
}
};

class Sf_souffle_small : public SouffleProgram {
private:
static inline bool regex_wrapper(const std::string& pattern, const std::string& text) {
   bool result = false; 
   try { result = std::regex_match(text, std::regex(pattern)); } catch(...) { 
     std::cerr << "warning: wrong pattern provided for match(\"" << pattern << "\",\"" << text << "\").\n";
}
   return result;
}
private:
static inline std::string substr_wrapper(const std::string& str, size_t idx, size_t len) {
   std::string result; 
   try { result = str.substr(idx,len); } catch(...) { 
     std::cerr << "warning: wrong index position provided by substr(\"";
     std::cerr << str << "\"," << (int32_t)idx << "," << (int32_t)len << ") functor.\n";
   } return result;
}
private:
static inline RamDomain wrapper_tonumber(const std::string& str) {
   RamDomain result=0; 
   try { result = stord(str); } catch(...) { 
     std::cerr << "error: wrong string provided by to_number(\"";
     std::cerr << str << "\") functor.\n";
     raise(SIGFPE);
   } return result;
}
public:
// -- initialize symbol table --
SymbolTable symTable
{
	R"_(v0,v2,v1)_",
	R"_(Rule)_",
	R"_(points_initial,v0,v1)_",
	R"_(receiver_formal,v1,v2)_",
	R"_(pointsto_objcont(v0,v2,v1) :- 
   Rule(10),
   points_initial(v0,v1),
   receiver_formal(v1,v2).)_",
	R"_(v2,v0,v1)_",
	R"_(store,v2,v0)_",
	R"_(pointsto_objcont(v2,v0,v1) :- 
   Rule(6),
   points_initial(v0,v1),
   store(v2,_,v0).)_",
	R"_(v3,v2,v0)_",
	R"_(actual,v0,v2)_",
	R"_(points_initial,v3,v0)_",
	R"_(pointsto_objcont(v3,v2,v0) :- 
   Rule(11),
   actual(v0,_,v2),
   points_initial(v3,v0).)_",
	R"_(v0,v3,v2)_",
	R"_(pointsto_objcont,v0,v2)_",
	R"_(receiver_formal,v2,v3)_",
	R"_(pointsto_objcont(v0,v3,v2) :- 
   Rule(2),
   pointsto_objcont(v0,_,v2),
   receiver_formal(v2,v3).)_",
	R"_(v2,v0,v3)_",
	R"_(load,v0,v2)_",
	R"_(points_initial,v2,v3)_",
	R"_(pointsto_objcont(v2,v0,v3) :- 
   Rule(0),
   load(v0,_,v2),
   points_initial(v2,v3).)_",
	R"_(v1,v3,v2)_",
	R"_(pointsto_objcont,v1,v2)_",
	R"_(pointsto_objcont(v1,v3,v2) :- 
   Rule(4),
   pointsto_objcont(_,v1,v2),
   receiver_formal(v2,v3).)_",
	R"_(pointsto_objcont(v2,v0,v1) :- 
   Rule(8),
   points_initial(v0,v1),
   receiver_formal(v1,v2).)_",
	R"_(points_initial,v2,v1)_",
	R"_(pointsto_objcont(v0,v2,v1) :- 
   Rule(9),
   points_initial(v0,v1),
   points_initial(v2,v1).)_",
	R"_(pointsto_objcont,v2,v0)_",
	R"_(pointsto_objcont(v2,v0,v1) :- 
   Rule(5),
   points_initial(v0,v1),
   pointsto_objcont(v2,v0,_).)_",
	R"_(pointsto_objcont(v0,v2,v1) :- 
   Rule(1),
   points_initial(v0,v1),
   store(v2,_,v0).)_",
	R"_(v0,v2,v3)_",
	R"_(pointsto_objcont(v0,v2,v3) :- 
   Rule(3),
   load(v0,_,v2),
   points_initial(v2,v3).)_",
	R"_(pointsto_objcont(v0,v2,v1) :- 
   Rule(7),
   points_initial(v0,v1),
   pointsto_objcont(v2,v0,_).)_",
};// -- Table: Rule
std::unique_ptr<t_btree_3__0_1_2__1__7> rel_1_Rule = std::make_unique<t_btree_3__0_1_2__1__7>();
souffle::RelationWrapper<0,t_btree_3__0_1_2__1__7,Tuple<RamDomain,3>,3> wrapper_rel_1_Rule;
// -- Table: actual
std::unique_ptr<t_btree_5__0_2_1_3_4__5__31> rel_2_actual = std::make_unique<t_btree_5__0_2_1_3_4__5__31>();
souffle::RelationWrapper<1,t_btree_5__0_2_1_3_4__5__31,Tuple<RamDomain,5>,5> wrapper_rel_2_actual;
// -- Table: load
std::unique_ptr<t_btree_5__0_2_1_3_4__5__31> rel_3_load = std::make_unique<t_btree_5__0_2_1_3_4__5__31>();
souffle::RelationWrapper<2,t_btree_5__0_2_1_3_4__5__31,Tuple<RamDomain,5>,5> wrapper_rel_3_load;
// -- Table: points_initial
std::unique_ptr<t_btree_4__0_1_3_2__1_0_2_3__1__2__3__15> rel_4_points_initial = std::make_unique<t_btree_4__0_1_3_2__1_0_2_3__1__2__3__15>();
souffle::RelationWrapper<3,t_btree_4__0_1_3_2__1_0_2_3__1__2__3__15,Tuple<RamDomain,4>,4> wrapper_rel_4_points_initial;
// -- Table: receiver_formal
std::unique_ptr<t_btree_4__0_1_2_3__1__3__15> rel_5_receiver_formal = std::make_unique<t_btree_4__0_1_2_3__1__3__15>();
souffle::RelationWrapper<4,t_btree_4__0_1_2_3__1__3__15,Tuple<RamDomain,4>,4> wrapper_rel_5_receiver_formal;
// -- Table: store
std::unique_ptr<t_btree_5__2_0_1_3_4__4__5__31> rel_6_store = std::make_unique<t_btree_5__2_0_1_3_4__4__5__31>();
souffle::RelationWrapper<5,t_btree_5__2_0_1_3_4__4__5__31,Tuple<RamDomain,5>,5> wrapper_rel_6_store;
// -- Table: pointsto_objcont
std::unique_ptr<t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31> rel_7_pointsto_objcont = std::make_unique<t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31>();
souffle::RelationWrapper<6,t_btree_5__1_2_0_4_3__0_1_2_4_3__0_2_1_3_4__3__5__6__7__31,Tuple<RamDomain,5>,5> wrapper_rel_7_pointsto_objcont;
// -- Table: @delta_pointsto_objcont
std::unique_ptr<t_btree_5__1_0_2_3_4__2__31> rel_8_delta_pointsto_objcont = std::make_unique<t_btree_5__1_0_2_3_4__2__31>();
// -- Table: @new_pointsto_objcont
std::unique_ptr<t_btree_5__1_0_2_3_4__2__31> rel_9_new_pointsto_objcont = std::make_unique<t_btree_5__1_0_2_3_4__2__31>();
// -- Table: pointsto_objcont.@info.1
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_10_pointsto_objcont_info_1 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<7,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_10_pointsto_objcont_info_1;
// -- Table: pointsto_objcont.@info.10
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_11_pointsto_objcont_info_10 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<8,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_11_pointsto_objcont_info_10;
// -- Table: pointsto_objcont.@info.11
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_12_pointsto_objcont_info_11 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<9,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_12_pointsto_objcont_info_11;
// -- Table: pointsto_objcont.@info.12
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_13_pointsto_objcont_info_12 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<10,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_13_pointsto_objcont_info_12;
// -- Table: pointsto_objcont.@info.2
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_14_pointsto_objcont_info_2 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<11,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_14_pointsto_objcont_info_2;
// -- Table: pointsto_objcont.@info.3
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_15_pointsto_objcont_info_3 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<12,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_15_pointsto_objcont_info_3;
// -- Table: pointsto_objcont.@info.4
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_16_pointsto_objcont_info_4 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<13,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_16_pointsto_objcont_info_4;
// -- Table: pointsto_objcont.@info.5
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_17_pointsto_objcont_info_5 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<14,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_17_pointsto_objcont_info_5;
// -- Table: pointsto_objcont.@info.6
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_18_pointsto_objcont_info_6 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<15,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_18_pointsto_objcont_info_6;
// -- Table: pointsto_objcont.@info.7
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_19_pointsto_objcont_info_7 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<16,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_19_pointsto_objcont_info_7;
// -- Table: pointsto_objcont.@info.8
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_20_pointsto_objcont_info_8 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<17,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_20_pointsto_objcont_info_8;
// -- Table: pointsto_objcont.@info.9
std::unique_ptr<t_btree_6__0_1_2_3_4_5__63> rel_21_pointsto_objcont_info_9 = std::make_unique<t_btree_6__0_1_2_3_4_5__63>();
souffle::RelationWrapper<18,t_btree_6__0_1_2_3_4_5__63,Tuple<RamDomain,6>,6> wrapper_rel_21_pointsto_objcont_info_9;
public:
Sf_souffle_small() : 
wrapper_rel_1_Rule(*rel_1_Rule,symTable,"Rule",std::array<const char *,3>{{"i:number","i:number","i:number"}},std::array<const char *,3>{{"n","@rule_number","@level_number"}}),

wrapper_rel_2_actual(*rel_2_actual,symTable,"actual",std::array<const char *,5>{{"s:H","s:Z","s:V","i:number","i:number"}},std::array<const char *,5>{{"v0","v1","v2","@rule_number","@level_number"}}),

wrapper_rel_3_load(*rel_3_load,symTable,"load",std::array<const char *,5>{{"s:V","s:F","s:V","i:number","i:number"}},std::array<const char *,5>{{"v0","v1","v2","@rule_number","@level_number"}}),

wrapper_rel_4_points_initial(*rel_4_points_initial,symTable,"points_initial",std::array<const char *,4>{{"s:V","s:H","i:number","i:number"}},std::array<const char *,4>{{"v0","v1","@rule_number","@level_number"}}),

wrapper_rel_5_receiver_formal(*rel_5_receiver_formal,symTable,"receiver_formal",std::array<const char *,4>{{"s:H","s:V","i:number","i:number"}},std::array<const char *,4>{{"v0","v1","@rule_number","@level_number"}}),

wrapper_rel_6_store(*rel_6_store,symTable,"store",std::array<const char *,5>{{"s:V","s:F","s:V","i:number","i:number"}},std::array<const char *,5>{{"v0","v1","v2","@rule_number","@level_number"}}),

wrapper_rel_7_pointsto_objcont(*rel_7_pointsto_objcont,symTable,"pointsto_objcont",std::array<const char *,5>{{"s:V","s:V","s:H","i:number","i:number"}},std::array<const char *,5>{{"v0","v1","v2","@rule_number","@level_number"}}),

wrapper_rel_10_pointsto_objcont_info_1(*rel_10_pointsto_objcont_info_1,symTable,"pointsto_objcont.@info.1",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_11_pointsto_objcont_info_10(*rel_11_pointsto_objcont_info_10,symTable,"pointsto_objcont.@info.10",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_12_pointsto_objcont_info_11(*rel_12_pointsto_objcont_info_11,symTable,"pointsto_objcont.@info.11",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_13_pointsto_objcont_info_12(*rel_13_pointsto_objcont_info_12,symTable,"pointsto_objcont.@info.12",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_14_pointsto_objcont_info_2(*rel_14_pointsto_objcont_info_2,symTable,"pointsto_objcont.@info.2",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_15_pointsto_objcont_info_3(*rel_15_pointsto_objcont_info_3,symTable,"pointsto_objcont.@info.3",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_16_pointsto_objcont_info_4(*rel_16_pointsto_objcont_info_4,symTable,"pointsto_objcont.@info.4",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_17_pointsto_objcont_info_5(*rel_17_pointsto_objcont_info_5,symTable,"pointsto_objcont.@info.5",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_18_pointsto_objcont_info_6(*rel_18_pointsto_objcont_info_6,symTable,"pointsto_objcont.@info.6",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_19_pointsto_objcont_info_7(*rel_19_pointsto_objcont_info_7,symTable,"pointsto_objcont.@info.7",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_20_pointsto_objcont_info_8(*rel_20_pointsto_objcont_info_8,symTable,"pointsto_objcont.@info.8",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}),

wrapper_rel_21_pointsto_objcont_info_9(*rel_21_pointsto_objcont_info_9,symTable,"pointsto_objcont.@info.9",std::array<const char *,6>{{"i:number","s:symbol","s:symbol","s:symbol","s:symbol","s:symbol"}},std::array<const char *,6>{{"clause_num","head_vars","rel_0","rel_1","rel_2","clause_repr"}}){
addRelation("Rule",&wrapper_rel_1_Rule,true,false);
addRelation("actual",&wrapper_rel_2_actual,true,false);
addRelation("load",&wrapper_rel_3_load,true,false);
addRelation("points_initial",&wrapper_rel_4_points_initial,true,false);
addRelation("receiver_formal",&wrapper_rel_5_receiver_formal,true,false);
addRelation("store",&wrapper_rel_6_store,true,false);
addRelation("pointsto_objcont",&wrapper_rel_7_pointsto_objcont,false,true);
addRelation("pointsto_objcont.@info.1",&wrapper_rel_10_pointsto_objcont_info_1,false,false);
addRelation("pointsto_objcont.@info.10",&wrapper_rel_11_pointsto_objcont_info_10,false,false);
addRelation("pointsto_objcont.@info.11",&wrapper_rel_12_pointsto_objcont_info_11,false,false);
addRelation("pointsto_objcont.@info.12",&wrapper_rel_13_pointsto_objcont_info_12,false,false);
addRelation("pointsto_objcont.@info.2",&wrapper_rel_14_pointsto_objcont_info_2,false,false);
addRelation("pointsto_objcont.@info.3",&wrapper_rel_15_pointsto_objcont_info_3,false,false);
addRelation("pointsto_objcont.@info.4",&wrapper_rel_16_pointsto_objcont_info_4,false,false);
addRelation("pointsto_objcont.@info.5",&wrapper_rel_17_pointsto_objcont_info_5,false,false);
addRelation("pointsto_objcont.@info.6",&wrapper_rel_18_pointsto_objcont_info_6,false,false);
addRelation("pointsto_objcont.@info.7",&wrapper_rel_19_pointsto_objcont_info_7,false,false);
addRelation("pointsto_objcont.@info.8",&wrapper_rel_20_pointsto_objcont_info_8,false,false);
addRelation("pointsto_objcont.@info.9",&wrapper_rel_21_pointsto_objcont_info_9,false,false);
}
~Sf_souffle_small() {
}
private:
void runFunction(std::string inputDirectory = ".", std::string outputDirectory = ".", size_t stratumIndex = (size_t) -1, bool performIO = false) {
SignalHandler::instance()->set();
std::atomic<size_t> iter(0);

// -- query evaluation --
/* BEGIN STRATUM 0 */
[&]() {
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./Rule.facts"},{"name","Rule"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({0,0,0}), symTable, ioDirectives, true)->readAll(*rel_1_Rule);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
}
}();
/* END STRATUM 0 */
/* BEGIN STRATUM 1 */
[&]() {
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./actual.facts"},{"name","actual"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_2_actual);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
}
}();
/* END STRATUM 1 */
/* BEGIN STRATUM 2 */
[&]() {
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./load.facts"},{"name","load"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_3_load);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
}
}();
/* END STRATUM 2 */
/* BEGIN STRATUM 3 */
[&]() {
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./points_initial.facts"},{"name","points_initial"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_4_points_initial);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
}
}();
/* END STRATUM 3 */
/* BEGIN STRATUM 4 */
[&]() {
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./receiver_formal.facts"},{"name","receiver_formal"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_5_receiver_formal);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
}
}();
/* END STRATUM 4 */
/* BEGIN STRATUM 5 */
[&]() {
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./store.facts"},{"name","store"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_6_store);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
}
}();
/* END STRATUM 5 */
/* BEGIN STRATUM 6 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v0,v2,v1,1,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(10,_,@level_num_0),
   points_initial(v0,v1,_,@level_num_1),
   receiver_formal(v1,v2,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [35:1-35:91])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_5_receiver_formal->empty())))) {
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(10),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_4_points_initial) {
const Tuple<RamDomain,4> key({{env1[1],0,0,0}});
auto range = rel_5_receiver_formal->equalRange_1(key,READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt));
for(const auto& env2 : range) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env2[1]),static_cast<RamDomain>(env1[1]),static_cast<RamDomain>(RamDomain(1)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[3], }), env2[3], })) + (RamDomain(1)))}});
rel_7_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v2,v0,v1,2,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(6,_,@level_num_0),
   points_initial(v0,v1,_,@level_num_1),
   store(v2,_,v0,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [36:1-36:84])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_6_store->empty())))) {
{
CREATE_OP_CONTEXT(rel_6_store_op_ctxt,rel_6_store->createContext());
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(6),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_4_points_initial) {
const Tuple<RamDomain,5> key({{0,0,env1[0],0,0}});
auto range = rel_6_store->equalRange_4(key,READ_OP_CONTEXT(rel_6_store_op_ctxt));
for(const auto& env2 : range) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env2[0]),static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env1[1]),static_cast<RamDomain>(RamDomain(2)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[3], }), env2[4], })) + (RamDomain(1)))}});
rel_7_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v3,v2,v0,3,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(11,_,@level_num_0),
   actual(v0,_,v2,_,@level_num_1),
   points_initial(v3,v0,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [37:1-37:86])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_2_actual->empty())))) && (!(rel_4_points_initial->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_2_actual_op_ctxt,rel_2_actual->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(11),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_2_actual) {
const Tuple<RamDomain,4> key({{0,env1[0],0,0}});
auto range = rel_4_points_initial->equalRange_2(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env2 : range) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env2[0]),static_cast<RamDomain>(env1[2]),static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(RamDomain(3)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[4], }), env2[3], })) + (RamDomain(1)))}});
rel_7_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v2,v0,v3,5,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(0,_,@level_num_0),
   load(v0,_,v2,_,@level_num_1),
   points_initial(v2,v3,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [39:1-39:83])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_3_load->empty())))) && (!(rel_4_points_initial->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_3_load_op_ctxt,rel_3_load->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(0),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_3_load) {
const Tuple<RamDomain,4> key({{env1[2],0,0,0}});
auto range = rel_4_points_initial->equalRange_1(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env2 : range) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env1[2]),static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env2[1]),static_cast<RamDomain>(RamDomain(5)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[4], }), env2[3], })) + (RamDomain(1)))}});
rel_7_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v2,v0,v1,7,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(8,_,@level_num_0),
   points_initial(v0,v1,_,@level_num_1),
   receiver_formal(v1,v2,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [41:1-41:90])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_5_receiver_formal->empty())))) {
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(8),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_4_points_initial) {
const Tuple<RamDomain,4> key({{env1[1],0,0,0}});
auto range = rel_5_receiver_formal->equalRange_1(key,READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt));
for(const auto& env2 : range) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env2[1]),static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env1[1]),static_cast<RamDomain>(RamDomain(7)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[3], }), env2[3], })) + (RamDomain(1)))}});
rel_7_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v0,v2,v1,8,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(9,_,@level_num_0),
   points_initial(v0,v1,_,@level_num_1),
   points_initial(v2,v1,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [42:1-42:89])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_4_points_initial->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(9),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_4_points_initial) {
const Tuple<RamDomain,4> key({{0,env1[1],0,0}});
auto range = rel_4_points_initial->equalRange_2(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env2 : range) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env2[0]),static_cast<RamDomain>(env1[1]),static_cast<RamDomain>(RamDomain(8)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[3], }), env2[3], })) + (RamDomain(1)))}});
rel_7_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v0,v2,v1,10,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(1,_,@level_num_0),
   points_initial(v0,v1,_,@level_num_1),
   store(v2,_,v0,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [44:1-44:84])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_6_store->empty())))) {
{
CREATE_OP_CONTEXT(rel_6_store_op_ctxt,rel_6_store->createContext());
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(1),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_4_points_initial) {
const Tuple<RamDomain,5> key({{0,0,env1[0],0,0}});
auto range = rel_6_store->equalRange_4(key,READ_OP_CONTEXT(rel_6_store_op_ctxt));
for(const auto& env2 : range) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env2[0]),static_cast<RamDomain>(env1[1]),static_cast<RamDomain>(RamDomain(10)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[3], }), env2[4], })) + (RamDomain(1)))}});
rel_7_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v0,v2,v3,11,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(3,_,@level_num_0),
   load(v0,_,v2,_,@level_num_1),
   points_initial(v2,v3,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [45:1-45:83])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_3_load->empty())))) && (!(rel_4_points_initial->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_3_load_op_ctxt,rel_3_load->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(3),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_3_load) {
const Tuple<RamDomain,4> key({{env1[2],0,0,0}});
auto range = rel_4_points_initial->equalRange_1(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env2 : range) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env1[2]),static_cast<RamDomain>(env2[1]),static_cast<RamDomain>(RamDomain(11)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[4], }), env2[3], })) + (RamDomain(1)))}});
rel_7_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
}
}
}
}
}
rel_8_delta_pointsto_objcont->insertAll(*rel_7_pointsto_objcont);
iter = 0;
for(;;) {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v0,v3,v2,4,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(2,_,@level_num_0),
   pointsto_objcont(v0,_,v2,_,@level_num_1),
   receiver_formal(v2,v3,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [38:1-38:96])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_8_delta_pointsto_objcont->empty())))) && (!(rel_5_receiver_formal->empty())))) {
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
CREATE_OP_CONTEXT(rel_9_new_pointsto_objcont_op_ctxt,rel_9_new_pointsto_objcont->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_8_delta_pointsto_objcont_op_ctxt,rel_8_delta_pointsto_objcont->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(2),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_8_delta_pointsto_objcont) {
const Tuple<RamDomain,4> key({{env1[2],0,0,0}});
auto range = rel_5_receiver_formal->equalRange_1(key,READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt));
for(const auto& env2 : range) {
if( !([&]() -> bool {
auto existenceCheck = rel_7_pointsto_objcont->equalRange_7(Tuple<RamDomain,5>({{env1[0],env2[1],env1[2],0,0}}),READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
if (existenceCheck.empty()) return false; else return (*existenceCheck.begin())[4] <= (std::max({std::max({env0[2], env1[4], }), env2[3], })) + (RamDomain(1));}()
)) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env2[1]),static_cast<RamDomain>(env1[2]),static_cast<RamDomain>(RamDomain(4)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[4], }), env2[3], })) + (RamDomain(1)))}});
rel_9_new_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_9_new_pointsto_objcont_op_ctxt));
}
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v1,v3,v2,6,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(4,_,@level_num_0),
   pointsto_objcont(_,v1,v2,_,@level_num_1),
   receiver_formal(v2,v3,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [40:1-40:96])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_8_delta_pointsto_objcont->empty())))) && (!(rel_5_receiver_formal->empty())))) {
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
CREATE_OP_CONTEXT(rel_9_new_pointsto_objcont_op_ctxt,rel_9_new_pointsto_objcont->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_8_delta_pointsto_objcont_op_ctxt,rel_8_delta_pointsto_objcont->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(4),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_8_delta_pointsto_objcont) {
const Tuple<RamDomain,4> key({{env1[2],0,0,0}});
auto range = rel_5_receiver_formal->equalRange_1(key,READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt));
for(const auto& env2 : range) {
if( !([&]() -> bool {
auto existenceCheck = rel_7_pointsto_objcont->equalRange_7(Tuple<RamDomain,5>({{env1[1],env2[1],env1[2],0,0}}),READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
if (existenceCheck.empty()) return false; else return (*existenceCheck.begin())[4] <= (std::max({std::max({env0[2], env1[4], }), env2[3], })) + (RamDomain(1));}()
)) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env1[1]),static_cast<RamDomain>(env2[1]),static_cast<RamDomain>(env1[2]),static_cast<RamDomain>(RamDomain(6)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[4], }), env2[3], })) + (RamDomain(1)))}});
rel_9_new_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_9_new_pointsto_objcont_op_ctxt));
}
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v2,v0,v1,9,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(5,_,@level_num_0),
   points_initial(v0,v1,_,@level_num_1),
   pointsto_objcont(v2,v0,_,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [43:1-43:95])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_8_delta_pointsto_objcont->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_9_new_pointsto_objcont_op_ctxt,rel_9_new_pointsto_objcont->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_8_delta_pointsto_objcont_op_ctxt,rel_8_delta_pointsto_objcont->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(5),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_4_points_initial) {
const Tuple<RamDomain,5> key({{0,env1[0],0,0,0}});
auto range = rel_8_delta_pointsto_objcont->equalRange_2(key,READ_OP_CONTEXT(rel_8_delta_pointsto_objcont_op_ctxt));
for(const auto& env2 : range) {
if( !([&]() -> bool {
auto existenceCheck = rel_7_pointsto_objcont->equalRange_7(Tuple<RamDomain,5>({{env2[0],env1[0],env1[1],0,0}}),READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
if (existenceCheck.empty()) return false; else return (*existenceCheck.begin())[4] <= (std::max({std::max({env0[2], env1[3], }), env2[4], })) + (RamDomain(1));}()
)) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env2[0]),static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env1[1]),static_cast<RamDomain>(RamDomain(9)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[3], }), env2[4], })) + (RamDomain(1)))}});
rel_9_new_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_9_new_pointsto_objcont_op_ctxt));
}
}
}
}
}
}
SignalHandler::instance()->setMsg(R"_(pointsto_objcont(v0,v2,v1,12,(max(max(@level_num_0,@level_num_1),@level_num_2)+1)) :- 
   Rule(7,_,@level_num_0),
   points_initial(v0,v1,_,@level_num_1),
   pointsto_objcont(v2,v0,_,_,@level_num_2).
in file /Users/jonathan/Documents/GitHub/prosynth/benchmarks/curated/1-object-1-type/rules.small.dl [46:1-46:95])_");
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_8_delta_pointsto_objcont->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_9_new_pointsto_objcont_op_ctxt,rel_9_new_pointsto_objcont->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_8_delta_pointsto_objcont_op_ctxt,rel_8_delta_pointsto_objcont->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(7),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
for(const auto& env1 : *rel_4_points_initial) {
const Tuple<RamDomain,5> key({{0,env1[0],0,0,0}});
auto range = rel_8_delta_pointsto_objcont->equalRange_2(key,READ_OP_CONTEXT(rel_8_delta_pointsto_objcont_op_ctxt));
for(const auto& env2 : range) {
if( !([&]() -> bool {
auto existenceCheck = rel_7_pointsto_objcont->equalRange_7(Tuple<RamDomain,5>({{env1[0],env2[0],env1[1],0,0}}),READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
if (existenceCheck.empty()) return false; else return (*existenceCheck.begin())[4] <= (std::max({std::max({env0[2], env1[3], }), env2[4], })) + (RamDomain(1));}()
)) {
Tuple<RamDomain,5> tuple({{static_cast<RamDomain>(env1[0]),static_cast<RamDomain>(env2[0]),static_cast<RamDomain>(env1[1]),static_cast<RamDomain>(RamDomain(12)),static_cast<RamDomain>((std::max({std::max({env0[2], env1[3], }), env2[4], })) + (RamDomain(1)))}});
rel_9_new_pointsto_objcont->insert(tuple,READ_OP_CONTEXT(rel_9_new_pointsto_objcont_op_ctxt));
}
}
}
}
}
}
if(rel_9_new_pointsto_objcont->empty()) break;
rel_7_pointsto_objcont->insertAll(*rel_9_new_pointsto_objcont);
std::swap(rel_8_delta_pointsto_objcont, rel_9_new_pointsto_objcont);
rel_9_new_pointsto_objcont->purge();
iter++;
}
iter = 0;
if (!isHintsProfilingEnabled()) rel_8_delta_pointsto_objcont->purge();
if (!isHintsProfilingEnabled()) rel_9_new_pointsto_objcont->purge();
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"attributeNames","v0\tv1\tv2"},{"filename","./pointsto_objcont.csv"},{"name","pointsto_objcont"}});
if (!outputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = outputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getWriter(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->writeAll(*rel_7_pointsto_objcont);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
}
}();
/* END STRATUM 6 */
/* BEGIN STRATUM 7 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.1(1,"v0,v2,v1","Rule","points_initial,v0,v1","receiver_formal,v1,v2","pointsto_objcont(v0,v2,v1) :- 
   Rule(10),
   points_initial(v0,v1),
   receiver_formal(v1,v2).").
in file  [0:0-0:0])_");
rel_10_pointsto_objcont_info_1->insert(RamDomain(1),RamDomain(0),RamDomain(1),RamDomain(2),RamDomain(3),RamDomain(4));
}();
/* END STRATUM 7 */
/* BEGIN STRATUM 8 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.10(10,"v0,v2,v1","Rule","points_initial,v0,v1","store,v2,v0","pointsto_objcont(v0,v2,v1) :- 
   Rule(1),
   points_initial(v0,v1),
   store(v2,_,v0).").
in file  [0:0-0:0])_");
rel_11_pointsto_objcont_info_10->insert(RamDomain(10),RamDomain(0),RamDomain(1),RamDomain(2),RamDomain(6),RamDomain(28));
}();
/* END STRATUM 8 */
/* BEGIN STRATUM 9 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.11(11,"v0,v2,v3","Rule","load,v0,v2","points_initial,v2,v3","pointsto_objcont(v0,v2,v3) :- 
   Rule(3),
   load(v0,_,v2),
   points_initial(v2,v3).").
in file  [0:0-0:0])_");
rel_12_pointsto_objcont_info_11->insert(RamDomain(11),RamDomain(29),RamDomain(1),RamDomain(17),RamDomain(18),RamDomain(30));
}();
/* END STRATUM 9 */
/* BEGIN STRATUM 10 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.12(12,"v0,v2,v1","Rule","points_initial,v0,v1","pointsto_objcont,v2,v0","pointsto_objcont(v0,v2,v1) :- 
   Rule(7),
   points_initial(v0,v1),
   pointsto_objcont(v2,v0,_).").
in file  [0:0-0:0])_");
rel_13_pointsto_objcont_info_12->insert(RamDomain(12),RamDomain(0),RamDomain(1),RamDomain(2),RamDomain(26),RamDomain(31));
}();
/* END STRATUM 10 */
/* BEGIN STRATUM 11 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.2(2,"v2,v0,v1","Rule","points_initial,v0,v1","store,v2,v0","pointsto_objcont(v2,v0,v1) :- 
   Rule(6),
   points_initial(v0,v1),
   store(v2,_,v0).").
in file  [0:0-0:0])_");
rel_14_pointsto_objcont_info_2->insert(RamDomain(2),RamDomain(5),RamDomain(1),RamDomain(2),RamDomain(6),RamDomain(7));
}();
/* END STRATUM 11 */
/* BEGIN STRATUM 12 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.3(3,"v3,v2,v0","Rule","actual,v0,v2","points_initial,v3,v0","pointsto_objcont(v3,v2,v0) :- 
   Rule(11),
   actual(v0,_,v2),
   points_initial(v3,v0).").
in file  [0:0-0:0])_");
rel_15_pointsto_objcont_info_3->insert(RamDomain(3),RamDomain(8),RamDomain(1),RamDomain(9),RamDomain(10),RamDomain(11));
}();
/* END STRATUM 12 */
/* BEGIN STRATUM 13 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.4(4,"v0,v3,v2","Rule","pointsto_objcont,v0,v2","receiver_formal,v2,v3","pointsto_objcont(v0,v3,v2) :- 
   Rule(2),
   pointsto_objcont(v0,_,v2),
   receiver_formal(v2,v3).").
in file  [0:0-0:0])_");
rel_16_pointsto_objcont_info_4->insert(RamDomain(4),RamDomain(12),RamDomain(1),RamDomain(13),RamDomain(14),RamDomain(15));
}();
/* END STRATUM 13 */
/* BEGIN STRATUM 14 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.5(5,"v2,v0,v3","Rule","load,v0,v2","points_initial,v2,v3","pointsto_objcont(v2,v0,v3) :- 
   Rule(0),
   load(v0,_,v2),
   points_initial(v2,v3).").
in file  [0:0-0:0])_");
rel_17_pointsto_objcont_info_5->insert(RamDomain(5),RamDomain(16),RamDomain(1),RamDomain(17),RamDomain(18),RamDomain(19));
}();
/* END STRATUM 14 */
/* BEGIN STRATUM 15 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.6(6,"v1,v3,v2","Rule","pointsto_objcont,v1,v2","receiver_formal,v2,v3","pointsto_objcont(v1,v3,v2) :- 
   Rule(4),
   pointsto_objcont(_,v1,v2),
   receiver_formal(v2,v3).").
in file  [0:0-0:0])_");
rel_18_pointsto_objcont_info_6->insert(RamDomain(6),RamDomain(20),RamDomain(1),RamDomain(21),RamDomain(14),RamDomain(22));
}();
/* END STRATUM 15 */
/* BEGIN STRATUM 16 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.7(7,"v2,v0,v1","Rule","points_initial,v0,v1","receiver_formal,v1,v2","pointsto_objcont(v2,v0,v1) :- 
   Rule(8),
   points_initial(v0,v1),
   receiver_formal(v1,v2).").
in file  [0:0-0:0])_");
rel_19_pointsto_objcont_info_7->insert(RamDomain(7),RamDomain(5),RamDomain(1),RamDomain(2),RamDomain(3),RamDomain(23));
}();
/* END STRATUM 16 */
/* BEGIN STRATUM 17 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.8(8,"v0,v2,v1","Rule","points_initial,v0,v1","points_initial,v2,v1","pointsto_objcont(v0,v2,v1) :- 
   Rule(9),
   points_initial(v0,v1),
   points_initial(v2,v1).").
in file  [0:0-0:0])_");
rel_20_pointsto_objcont_info_8->insert(RamDomain(8),RamDomain(0),RamDomain(1),RamDomain(2),RamDomain(24),RamDomain(25));
}();
/* END STRATUM 17 */
/* BEGIN STRATUM 18 */
[&]() {
SignalHandler::instance()->setMsg(R"_(pointsto_objcont.@info.9(9,"v2,v0,v1","Rule","points_initial,v0,v1","pointsto_objcont,v2,v0","pointsto_objcont(v2,v0,v1) :- 
   Rule(5),
   points_initial(v0,v1),
   pointsto_objcont(v2,v0,_).").
in file  [0:0-0:0])_");
rel_21_pointsto_objcont_info_9->insert(RamDomain(9),RamDomain(5),RamDomain(1),RamDomain(2),RamDomain(26),RamDomain(27));
}();
/* END STRATUM 18 */

// -- relation hint statistics --
if(isHintsProfilingEnabled()) {
std::cout << " -- Operation Hint Statistics --\n";
std::cout << "Relation rel_1_Rule:\n";
rel_1_Rule->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_2_actual:\n";
rel_2_actual->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_3_load:\n";
rel_3_load->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_4_points_initial:\n";
rel_4_points_initial->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_5_receiver_formal:\n";
rel_5_receiver_formal->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_6_store:\n";
rel_6_store->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_7_pointsto_objcont:\n";
rel_7_pointsto_objcont->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_8_delta_pointsto_objcont:\n";
rel_8_delta_pointsto_objcont->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_9_new_pointsto_objcont:\n";
rel_9_new_pointsto_objcont->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_10_pointsto_objcont_info_1:\n";
rel_10_pointsto_objcont_info_1->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_11_pointsto_objcont_info_10:\n";
rel_11_pointsto_objcont_info_10->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_12_pointsto_objcont_info_11:\n";
rel_12_pointsto_objcont_info_11->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_13_pointsto_objcont_info_12:\n";
rel_13_pointsto_objcont_info_12->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_14_pointsto_objcont_info_2:\n";
rel_14_pointsto_objcont_info_2->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_15_pointsto_objcont_info_3:\n";
rel_15_pointsto_objcont_info_3->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_16_pointsto_objcont_info_4:\n";
rel_16_pointsto_objcont_info_4->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_17_pointsto_objcont_info_5:\n";
rel_17_pointsto_objcont_info_5->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_18_pointsto_objcont_info_6:\n";
rel_18_pointsto_objcont_info_6->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_19_pointsto_objcont_info_7:\n";
rel_19_pointsto_objcont_info_7->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_20_pointsto_objcont_info_8:\n";
rel_20_pointsto_objcont_info_8->printHintStatistics(std::cout,"  ");
std::cout << "\n";
std::cout << "Relation rel_21_pointsto_objcont_info_9:\n";
rel_21_pointsto_objcont_info_9->printHintStatistics(std::cout,"  ");
std::cout << "\n";
}
SignalHandler::instance()->reset();
}
public:
void run(size_t stratumIndex = (size_t) -1) override { runFunction(".", ".", stratumIndex, false); }
public:
void runAll(std::string inputDirectory = ".", std::string outputDirectory = ".", size_t stratumIndex = (size_t) -1) override { runFunction(inputDirectory, outputDirectory, stratumIndex, true);
}
public:
void printAll(std::string outputDirectory = ".") override {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"attributeNames","v0\tv1\tv2"},{"filename","./pointsto_objcont.csv"},{"name","pointsto_objcont"}});
if (!outputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = outputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getWriter(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->writeAll(*rel_7_pointsto_objcont);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
}
public:
void loadAll(std::string inputDirectory = ".") override {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./Rule.facts"},{"name","Rule"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({0,0,0}), symTable, ioDirectives, true)->readAll(*rel_1_Rule);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./actual.facts"},{"name","actual"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_2_actual);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./load.facts"},{"name","load"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_3_load);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./points_initial.facts"},{"name","points_initial"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_4_points_initial);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./receiver_formal.facts"},{"name","receiver_formal"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_5_receiver_formal);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"filename","./store.facts"},{"name","store"}});
if (!inputDirectory.empty() && directiveMap["IO"] == "file" && directiveMap["filename"].front() != '/') {directiveMap["filename"] = inputDirectory + "/" + directiveMap["filename"];}
IODirectives ioDirectives(directiveMap);
IOSystem::getInstance().getReader(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->readAll(*rel_6_store);
} catch (std::exception& e) {std::cerr << "Error loading data: " << e.what() << '\n';}
}
public:
void dumpInputs(std::ostream& out = std::cout) override {
try {IODirectives ioDirectives;
ioDirectives.setIOType("stdout");
ioDirectives.setRelationName("rel_1_Rule");
IOSystem::getInstance().getWriter(std::vector<bool>({0,0,0}), symTable, ioDirectives, true)->writeAll(*rel_1_Rule);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
try {IODirectives ioDirectives;
ioDirectives.setIOType("stdout");
ioDirectives.setRelationName("rel_2_actual");
IOSystem::getInstance().getWriter(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->writeAll(*rel_2_actual);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
try {IODirectives ioDirectives;
ioDirectives.setIOType("stdout");
ioDirectives.setRelationName("rel_3_load");
IOSystem::getInstance().getWriter(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->writeAll(*rel_3_load);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
try {IODirectives ioDirectives;
ioDirectives.setIOType("stdout");
ioDirectives.setRelationName("rel_4_points_initial");
IOSystem::getInstance().getWriter(std::vector<bool>({1,1,0,0}), symTable, ioDirectives, true)->writeAll(*rel_4_points_initial);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
try {IODirectives ioDirectives;
ioDirectives.setIOType("stdout");
ioDirectives.setRelationName("rel_5_receiver_formal");
IOSystem::getInstance().getWriter(std::vector<bool>({1,1,0,0}), symTable, ioDirectives, true)->writeAll(*rel_5_receiver_formal);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
try {IODirectives ioDirectives;
ioDirectives.setIOType("stdout");
ioDirectives.setRelationName("rel_6_store");
IOSystem::getInstance().getWriter(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->writeAll(*rel_6_store);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
}
public:
void dumpOutputs(std::ostream& out = std::cout) override {
try {IODirectives ioDirectives;
ioDirectives.setIOType("stdout");
ioDirectives.setRelationName("rel_7_pointsto_objcont");
IOSystem::getInstance().getWriter(std::vector<bool>({1,1,1,0,0}), symTable, ioDirectives, true)->writeAll(*rel_7_pointsto_objcont);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
}
public:
SymbolTable& getSymbolTable() override {
return symTable;
}
void executeSubroutine(std::string name, const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) override {
if (name == "pointsto_objcont_10_negation_subproof") {
subproof_0(args, ret, err);
}
if (name == "pointsto_objcont_10_subproof") {
subproof_1(args, ret, err);
}
if (name == "pointsto_objcont_11_negation_subproof") {
subproof_2(args, ret, err);
}
if (name == "pointsto_objcont_11_subproof") {
subproof_3(args, ret, err);
}
if (name == "pointsto_objcont_12_negation_subproof") {
subproof_4(args, ret, err);
}
if (name == "pointsto_objcont_12_subproof") {
subproof_5(args, ret, err);
}
if (name == "pointsto_objcont_1_negation_subproof") {
subproof_6(args, ret, err);
}
if (name == "pointsto_objcont_1_subproof") {
subproof_7(args, ret, err);
}
if (name == "pointsto_objcont_2_negation_subproof") {
subproof_8(args, ret, err);
}
if (name == "pointsto_objcont_2_subproof") {
subproof_9(args, ret, err);
}
if (name == "pointsto_objcont_3_negation_subproof") {
subproof_10(args, ret, err);
}
if (name == "pointsto_objcont_3_subproof") {
subproof_11(args, ret, err);
}
if (name == "pointsto_objcont_4_negation_subproof") {
subproof_12(args, ret, err);
}
if (name == "pointsto_objcont_4_subproof") {
subproof_13(args, ret, err);
}
if (name == "pointsto_objcont_5_negation_subproof") {
subproof_14(args, ret, err);
}
if (name == "pointsto_objcont_5_subproof") {
subproof_15(args, ret, err);
}
if (name == "pointsto_objcont_6_negation_subproof") {
subproof_16(args, ret, err);
}
if (name == "pointsto_objcont_6_subproof") {
subproof_17(args, ret, err);
}
if (name == "pointsto_objcont_7_negation_subproof") {
subproof_18(args, ret, err);
}
if (name == "pointsto_objcont_7_subproof") {
subproof_19(args, ret, err);
}
if (name == "pointsto_objcont_8_negation_subproof") {
subproof_20(args, ret, err);
}
if (name == "pointsto_objcont_8_subproof") {
subproof_21(args, ret, err);
}
if (name == "pointsto_objcont_9_negation_subproof") {
subproof_22(args, ret, err);
}
if (name == "pointsto_objcont_9_subproof") {
subproof_23(args, ret, err);
}
}
void subproof_0(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(1),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(1));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[0],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_6_store_op_ctxt,rel_6_store->createContext());
if(!rel_6_store->equalRange_5(Tuple<RamDomain,5>({{(args)[1],0,(args)[0],0,0}}),READ_OP_CONTEXT(rel_6_store_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
}
return;
}
void subproof_1(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_6_store->empty())))) {
{
CREATE_OP_CONTEXT(rel_6_store_op_ctxt,rel_6_store->createContext());
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
const Tuple<RamDomain,3> key({{RamDomain(1),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[0],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[3]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{(args)[1],0,env1[0],0,0}});
auto range = rel_6_store->equalRange_5(key,READ_OP_CONTEXT(rel_6_store_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[4]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env2[4]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_2(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(3),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(3));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_3_load_op_ctxt,rel_3_load->createContext());
if(!rel_3_load->equalRange_5(Tuple<RamDomain,5>({{(args)[0],0,(args)[1],0,0}}),READ_OP_CONTEXT(rel_3_load_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[1],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
return;
}
void subproof_3(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_3_load->empty())))) && (!(rel_4_points_initial->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_3_load_op_ctxt,rel_3_load->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
const Tuple<RamDomain,3> key({{RamDomain(3),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{(args)[0],0,(args)[1],0,0}});
auto range = rel_3_load->equalRange_5(key,READ_OP_CONTEXT(rel_3_load_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[4]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{env1[2],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[3]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(3));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_4(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(7),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(7));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[0],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
if(!rel_7_pointsto_objcont->equalRange_3(Tuple<RamDomain,5>({{(args)[1],(args)[0],0,0,0}}),READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(0);
err.push_back(true);
}
return;
}
void subproof_5(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_7_pointsto_objcont->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(7),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[0],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[3]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{(args)[1],env1[0],0,0,0}});
auto range = rel_7_pointsto_objcont->equalRange_3(key,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[4]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(7));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env2[4]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_6(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(10),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(10));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[0],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
if(!rel_5_receiver_formal->equalRange_3(Tuple<RamDomain,4>({{(args)[2],(args)[1],0,0}}),READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
}
return;
}
void subproof_7(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_5_receiver_formal->empty())))) {
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
const Tuple<RamDomain,3> key({{RamDomain(10),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[0],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[3]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{env1[1],(args)[1],0,0}});
auto range = rel_5_receiver_formal->equalRange_3(key,READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[3]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(10));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_8(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(6),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(6));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[1],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_6_store_op_ctxt,rel_6_store->createContext());
if(!rel_6_store->equalRange_5(Tuple<RamDomain,5>({{(args)[0],0,(args)[1],0,0}}),READ_OP_CONTEXT(rel_6_store_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
}
return;
}
void subproof_9(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_6_store->empty())))) {
{
CREATE_OP_CONTEXT(rel_6_store_op_ctxt,rel_6_store->createContext());
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
const Tuple<RamDomain,3> key({{RamDomain(6),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[1],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[3]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{(args)[0],0,env1[0],0,0}});
auto range = rel_6_store->equalRange_5(key,READ_OP_CONTEXT(rel_6_store_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[4]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(6));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env2[4]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_10(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(11),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(11));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_2_actual_op_ctxt,rel_2_actual->createContext());
if(!rel_2_actual->equalRange_5(Tuple<RamDomain,5>({{(args)[2],0,(args)[1],0,0}}),READ_OP_CONTEXT(rel_2_actual_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[0],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
return;
}
void subproof_11(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_2_actual->empty())))) && (!(rel_4_points_initial->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_2_actual_op_ctxt,rel_2_actual->createContext());
const Tuple<RamDomain,3> key({{RamDomain(11),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{(args)[2],0,(args)[1],0,0}});
auto range = rel_2_actual->equalRange_5(key,READ_OP_CONTEXT(rel_2_actual_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[4]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[0],env1[0],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[3]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(11));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_12(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(2),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(2));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
if(!rel_7_pointsto_objcont->equalRange_5(Tuple<RamDomain,5>({{(args)[0],0,(args)[2],0,0}}),READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
if(!rel_5_receiver_formal->equalRange_3(Tuple<RamDomain,4>({{(args)[2],(args)[1],0,0}}),READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
}
return;
}
void subproof_13(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_7_pointsto_objcont->empty())))) && (!(rel_5_receiver_formal->empty())))) {
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(2),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{(args)[0],0,(args)[2],0,0}});
auto range = rel_7_pointsto_objcont->equalRange_5(key,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[4]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{env1[2],(args)[1],0,0}});
auto range = rel_5_receiver_formal->equalRange_3(key,READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[3]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_14(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(0),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(0));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_3_load_op_ctxt,rel_3_load->createContext());
if(!rel_3_load->equalRange_5(Tuple<RamDomain,5>({{(args)[1],0,(args)[0],0,0}}),READ_OP_CONTEXT(rel_3_load_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[0],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
return;
}
void subproof_15(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_3_load->empty())))) && (!(rel_4_points_initial->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_3_load_op_ctxt,rel_3_load->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
const Tuple<RamDomain,3> key({{RamDomain(0),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{(args)[1],0,(args)[0],0,0}});
auto range = rel_3_load->equalRange_5(key,READ_OP_CONTEXT(rel_3_load_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[4]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{env1[2],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[3]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_16(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(4),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(4));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
if(!rel_7_pointsto_objcont->equalRange_6(Tuple<RamDomain,5>({{0,(args)[0],(args)[2],0,0}}),READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
if(!rel_5_receiver_formal->equalRange_3(Tuple<RamDomain,4>({{(args)[2],(args)[1],0,0}}),READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
}
return;
}
void subproof_17(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_7_pointsto_objcont->empty())))) && (!(rel_5_receiver_formal->empty())))) {
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(4),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{0,(args)[0],(args)[2],0,0}});
auto range = rel_7_pointsto_objcont->equalRange_6(key,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[4]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{env1[2],(args)[1],0,0}});
auto range = rel_5_receiver_formal->equalRange_3(key,READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[3]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(4));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_18(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(8),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(8));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[1],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
if(!rel_5_receiver_formal->equalRange_3(Tuple<RamDomain,4>({{(args)[2],(args)[0],0,0}}),READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
}
return;
}
void subproof_19(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_5_receiver_formal->empty())))) {
{
CREATE_OP_CONTEXT(rel_5_receiver_formal_op_ctxt,rel_5_receiver_formal->createContext());
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
const Tuple<RamDomain,3> key({{RamDomain(8),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[1],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[3]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{env1[1],(args)[0],0,0}});
auto range = rel_5_receiver_formal->equalRange_3(key,READ_OP_CONTEXT(rel_5_receiver_formal_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[3]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(8));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env2[1]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_20(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(9),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(9));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[0],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[1],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
return;
}
void subproof_21(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_4_points_initial->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
const Tuple<RamDomain,3> key({{RamDomain(9),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[0],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[3]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[1],env1[1],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[3]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(9));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
void subproof_22(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
{
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
if(!rel_1_Rule->equalRange_1(Tuple<RamDomain,3>({{RamDomain(5),0,0}}),READ_OP_CONTEXT(rel_1_Rule_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(0));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back(RamDomain(5));
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
if(!rel_4_points_initial->equalRange_3(Tuple<RamDomain,4>({{(args)[1],(args)[2],0,0}}),READ_OP_CONTEXT(rel_4_points_initial_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(1));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
}
{
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
if(!rel_7_pointsto_objcont->equalRange_3(Tuple<RamDomain,5>({{(args)[0],(args)[1],0,0,0}}),READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt)).empty()) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(2));
err.push_back(false);
}
}
{
std::lock_guard<std::mutex> guard(lock);
ret.push_back(0);
err.push_back(true);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(0);
err.push_back(true);
}
return;
}
void subproof_23(const std::vector<RamDomain>& args, std::vector<RamDomain>& ret, std::vector<bool>& err) {
std::mutex lock;
if(((((!(rel_1_Rule->empty())) && (!(rel_4_points_initial->empty())))) && (!(rel_7_pointsto_objcont->empty())))) {
{
CREATE_OP_CONTEXT(rel_4_points_initial_op_ctxt,rel_4_points_initial->createContext());
CREATE_OP_CONTEXT(rel_1_Rule_op_ctxt,rel_1_Rule->createContext());
CREATE_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt,rel_7_pointsto_objcont->createContext());
const Tuple<RamDomain,3> key({{RamDomain(5),0,0}});
auto range = rel_1_Rule->equalRange_1(key,READ_OP_CONTEXT(rel_1_Rule_op_ctxt));
for(const auto& env0 : range) {
if( ((env0[2]) < ((args)[3]))) {
const Tuple<RamDomain,4> key({{(args)[1],(args)[2],0,0}});
auto range = rel_4_points_initial->equalRange_3(key,READ_OP_CONTEXT(rel_4_points_initial_op_ctxt));
for(const auto& env1 : range) {
if( ((env1[3]) < ((args)[3]))) {
const Tuple<RamDomain,5> key({{(args)[0],env1[0],0,0,0}});
auto range = rel_7_pointsto_objcont->equalRange_3(key,READ_OP_CONTEXT(rel_7_pointsto_objcont_op_ctxt));
for(const auto& env2 : range) {
if( ((env2[4]) < ((args)[3]))) {
std::lock_guard<std::mutex> guard(lock);
ret.push_back(RamDomain(5));
err.push_back(false);
ret.push_back(env0[1]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back(env1[2]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back(env2[2]);
err.push_back(false);
ret.push_back(env2[3]);
err.push_back(false);
ret.push_back(env2[4]);
err.push_back(false);
ret.push_back(env2[0]);
err.push_back(false);
ret.push_back((args)[0]);
err.push_back(false);
ret.push_back(env1[0]);
err.push_back(false);
ret.push_back((args)[1]);
err.push_back(false);
ret.push_back(env1[1]);
err.push_back(false);
ret.push_back((args)[2]);
err.push_back(false);
ret.push_back(env0[2]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env1[3]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
ret.push_back(env2[4]);
err.push_back(false);
ret.push_back((args)[3]);
err.push_back(false);
}
}
}
}
}
}
}
}
return;
}
};
SouffleProgram *newInstance_souffle_small(){return new Sf_souffle_small;}
SymbolTable *getST_souffle_small(SouffleProgram *p){return &reinterpret_cast<Sf_souffle_small*>(p)->symTable;}

#ifdef __EMBEDDED_SOUFFLE__
class factory_Sf_souffle_small: public souffle::ProgramFactory {
SouffleProgram *newInstance() {
return new Sf_souffle_small();
};
public:
factory_Sf_souffle_small() : ProgramFactory("souffle_small"){}
};
static factory_Sf_souffle_small __factory_Sf_souffle_small_instance;
}
#else
}
int main(int argc, char** argv)
{
try{
souffle::CmdOptions opt(R"(rules.small.dl)",
R"(.)",
R"(.)",
false,
R"()",
1,
-1);
if (!opt.parse(argc,argv)) return 1;
#if defined(_OPENMP) 
omp_set_nested(true);

#endif
souffle::Sf_souffle_small obj;
obj.runAll(opt.getInputFileDir(), opt.getOutputFileDir(), opt.getStratumIndex());
explain(obj, false);
return 0;
} catch(std::exception &e) { souffle::SignalHandler::instance()->error(e.what());}
}

#endif
