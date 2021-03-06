#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

namespace gimbricate {

class paf_row_t {
public:
    std::string query_sequence_name;
    uint64_t query_sequence_length;
    uint64_t query_start;
    uint64_t query_end;
    bool query_target_same_strand;
    std::string target_sequence_name;
    uint64_t target_sequence_length;
    uint64_t target_start;
    uint64_t target_end;
    uint64_t num_matches;
    uint64_t alignment_block_length;
    uint16_t mapping_quality;
    std::string cigar;
    paf_row_t(void);
    paf_row_t(const std::string& line);
    friend std::ostream& operator<<(std::ostream& out, const paf_row_t& pafrow);
};

void dump_paf_alignments(const std::string& filename);

}
