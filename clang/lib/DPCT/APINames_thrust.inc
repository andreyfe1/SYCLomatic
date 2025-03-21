//===--------------- APINames_thrust.inc ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
/****************************************************************************
*
* ENTRY(Interface APIName, APINAME, ProcessedOrNot, Flag, Priority, MigrationDesc)
*  Interface APIName: name of library Interface API available in official document
*  APIName: name of library API
*
*  ProcessedOrNot:  false|true
*    false: this API has not been processed.
*    true:  this API has been processed, need check MigrationDesc field to
            see if it has be migrated successfully.
*
*  Flag: Bit map for all kind of flag for this API.
*    default(all bits are 0): NO_FLAG
*    bit 0: API_CALL_REMOVED
*    bit 1: API_CALL_UNSUPPORTED
*  Priority: migration priority, eg. P0 - P4
*    P0:  should support in Beta release.
*    P4:  should support in Gold.
*
*  MigrationDesc: Successful[: Comment] | Unsupported: Comment
*    Successful:   this API has been migrated.
*    Unsupported:  this API can not be migrated currently.
*                  Must add Comment to explain why this API is Unsupported.
*    Comment:      extra comment on the migration.
*
****************************************************************************/
// thrust API
ENTRY(thrust::abs, thrust::abs, false, NO_FLAG, P4, "comment")
ENTRY(thrust::acos, thrust::acos, false, NO_FLAG, P4, "comment")
ENTRY(thrust::acosh, thrust::acosh, false, NO_FLAG, P4, "comment")
ENTRY(thrust::adjacent_difference, thrust::adjacent_difference, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::advance, thrust::advance, false, NO_FLAG, P4, "comment")
ENTRY(thrust::all_of, thrust::all_of, false, NO_FLAG, P4, "comment")
ENTRY(thrust::any_of, thrust::any_of, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::arg, thrust::arg, false, NO_FLAG, P4, "comment")
ENTRY(thrust::asin, thrust::asin, false, NO_FLAG, P4, "comment")
ENTRY(thrust::asinh, thrust::asinh, false, NO_FLAG, P4, "comment")
ENTRY(thrust::atan, thrust::atan, false, NO_FLAG, P4, "comment")
ENTRY(thrust::atanh, thrust::atanh, false, NO_FLAG, P4, "comment")
ENTRY(thrust::binary_search, thrust::binary_search, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::conj, thrust::conj, false, NO_FLAG, P4, "comment")
ENTRY(thrust::copy, thrust::copy, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::copy_if, thrust::copy_if, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::copy_n, thrust::copy_n, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::cos, thrust::cos, false, NO_FLAG, P4, "comment")
ENTRY(thrust::cosh, thrust::cosh, false, NO_FLAG, P4, "comment")
ENTRY(thrust::count, thrust::count, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::count_if, thrust::count_if, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::device_delete, thrust::device_delete, false, NO_FLAG, P4, "comment")
ENTRY(thrust::device_free, thrust::device_free, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::device_malloc, thrust::device_malloc, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::device_new, thrust::device_new, false, NO_FLAG, P4, "comment")
ENTRY(thrust::device_pointer_cast, thrust::device_pointer_cast, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::distance, thrust::distance, false, NO_FLAG, P4, "comment")
ENTRY(thrust::equal, thrust::equal, false, NO_FLAG, P4, "comment")
ENTRY(thrust::equal_range, thrust::equal_range, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::exclusive_scan, thrust::exclusive_scan, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::exclusive_scan_by_key, thrust::exclusive_scan_by_key, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::exp, thrust::exp, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::fill, thrust::fill, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::fill_n, thrust::fill_n, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::find, thrust::find, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::find_if, thrust::find_if, false, NO_FLAG, P4, "comment")
ENTRY(thrust::find_if_not, thrust::find_if_not, false, NO_FLAG, P4, "comment")
ENTRY(thrust::for_each, thrust::for_each, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::for_each_n, thrust::for_each_n, false, NO_FLAG, P4, "comment")
ENTRY(thrust::free, thrust::free, false, NO_FLAG, P4, "comment")
ENTRY(thrust::gather, thrust::gather, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::gather_if, thrust::gather_if, false, NO_FLAG, P4, "comment")
ENTRY(thrust::generate, thrust::generate, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::generate_n, thrust::generate_n, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::get, thrust::get, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::get_temporary_buffer, thrust::get_temporary_buffer, false, NO_FLAG, P4, "comment")
ENTRY(thrust::inclusive_scan, thrust::inclusive_scan, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::inclusive_scan_by_key, thrust::inclusive_scan_by_key, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::inner_product, thrust::inner_product, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::is_partitioned, thrust::is_partitioned, false, NO_FLAG, P4, "comment")
ENTRY(thrust::is_sorted, thrust::is_sorted, false, NO_FLAG, P4, "comment")
ENTRY(thrust::is_sorted_until, thrust::is_sorted_until, false, NO_FLAG, P4, "comment")
ENTRY(thrust::log, thrust::log, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::log10, thrust::log10, false, NO_FLAG, P4, "comment")
ENTRY(thrust::lower_bound, thrust::lower_bound, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::make_counting_iterator, thrust::make_counting_iterator, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::make_discard_iterator, thrust::make_discard_iterator, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::make_pair, thrust::make_pair, true, NO_FLAG, P4, "comment")
ENTRY(thrust::make_permutation_iterator, thrust::make_permutation_iterator, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::make_reverse_iterator, thrust::make_reverse_iterator, true, NO_FLAG, P4, "comment")
ENTRY(thrust::make_transform_iterator, thrust::make_transform_iterator, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::make_tuple, thrust::make_tuple, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::tie, thrust::tie, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::make_zip_iterator, thrust::make_zip_iterator, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::malloc, thrust::malloc, false, NO_FLAG, P4, "comment")
ENTRY(thrust::max_element, thrust::max_element, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::max, thrust::max, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::min, thrust::min, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::merge, thrust::merge, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::merge_by_key, thrust::merge_by_key, false, NO_FLAG, P4, "comment")
ENTRY(thrust::min_element, thrust::min_element, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::minmax_element, thrust::minmax_element, false, NO_FLAG, P4, "comment")
ENTRY(thrust::mismatch, thrust::mismatch, false, NO_FLAG, P4, "comment")
ENTRY(thrust::none_of, thrust::none_of, false, NO_FLAG, P4, "comment")
ENTRY(thrust::norm, thrust::norm, false, NO_FLAG, P4, "comment")
ENTRY(thrust::not1, thrust::not1, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::not2, thrust::not2, false, NO_FLAG, P4, "comment")
ENTRY(thrust::operator!=, thrust::operator!=, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::operator*, thrust::operator*, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::operator+, thrust::operator+, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::operator-, thrust::operator-, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::operator/, thrust::operator/, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::operator<, thrust::operator<, false, NO_FLAG, P4, "comment")
ENTRY(thrust::operator<<, thrust::operator<<, false, NO_FLAG, P4, "comment")
ENTRY(thrust::operator<=, thrust::operator<=, false, NO_FLAG, P4, "comment")
ENTRY(thrust::operator==, thrust::operator==, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::operator>, thrust::operator>, false, NO_FLAG, P4, "comment")
ENTRY(thrust::operator>=, thrust::operator>=, false, NO_FLAG, P4, "comment")
ENTRY(thrust::operator>>, thrust::operator>>, false, NO_FLAG, P4, "comment")
ENTRY(thrust::partition, thrust::partition, false, NO_FLAG, P4, "comment")
ENTRY(thrust::partition_copy, thrust::partition_copy, false, NO_FLAG, P4, "comment")
ENTRY(thrust::partition_point, thrust::partition_point, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::polar, thrust::polar, false, NO_FLAG, P4, "comment")
ENTRY(thrust::pow, thrust::pow, false, NO_FLAG, P4, "comment")
ENTRY(thrust::proj, thrust::proj, false, NO_FLAG, P4, "comment")
ENTRY(thrust::raw_pointer_cast, thrust::raw_pointer_cast, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::raw_reference_cast, thrust::raw_reference_cast, false, NO_FLAG, P4, "comment")
ENTRY(thrust::reduce, thrust::reduce, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::reduce_by_key, thrust::reduce_by_key, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::reinterpret_tag, thrust::reinterpret_tag, false, NO_FLAG, P4, "comment")
ENTRY(thrust::remove, thrust::remove, false, NO_FLAG, P4, "comment")
ENTRY(thrust::remove_copy, thrust::remove_copy, false, NO_FLAG, P4, "comment")
ENTRY(thrust::remove_copy_if, thrust::remove_copy_if, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::remove_if, thrust::remove_if, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::replace, thrust::replace, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::replace_copy, thrust::replace_copy, false, NO_FLAG, P4, "comment")
ENTRY(thrust::replace_copy_if, thrust::replace_copy_if, false, NO_FLAG, P4, "comment")
ENTRY(thrust::replace_if, thrust::replace_if, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::retag, thrust::retag, false, NO_FLAG, P4, "comment")
ENTRY(thrust::return_temporary_buffer, thrust::return_temporary_buffer, false, NO_FLAG, P4, "comment")
ENTRY(thrust::reverse, thrust::reverse, false, NO_FLAG, P4, "comment")
ENTRY(thrust::reverse_copy, thrust::reverse_copy, false, NO_FLAG, P4, "comment")
ENTRY(thrust::scatter, thrust::scatter, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::scatter_if, thrust::scatter_if, false, NO_FLAG, P4, "comment")
ENTRY(thrust::sequence, thrust::sequence, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::set_difference, thrust::set_difference, false, NO_FLAG, P4, "comment")
ENTRY(thrust::set_difference_by_key, thrust::set_difference_by_key, false, NO_FLAG, P4, "comment")
ENTRY(thrust::set_intersection, thrust::set_intersection, false, NO_FLAG, P4, "comment")
ENTRY(thrust::set_intersection_by_key, thrust::set_intersection_by_key, false, NO_FLAG, P4, "comment")
ENTRY(thrust::set_symmetric_difference, thrust::set_symmetric_difference, false, NO_FLAG, P4, "comment")
ENTRY(thrust::set_symmetric_difference_by_key, thrust::set_symmetric_difference_by_key, false, NO_FLAG, P4, "comment")
ENTRY(thrust::set_union, thrust::set_union, false, NO_FLAG, P4, "comment")
ENTRY(thrust::set_union_by_key, thrust::set_union_by_key, false, NO_FLAG, P4, "comment")
ENTRY(thrust::sin, thrust::sin, false, NO_FLAG, P4, "comment")
ENTRY(thrust::sinh, thrust::sinh, false, NO_FLAG, P4, "comment")
ENTRY(thrust::sort, thrust::sort, true, NO_FLAG, P4, "comment")
ENTRY(thrust::sort_by_key, thrust::sort_by_key, true, NO_FLAG, P4, "successful")
ENTRY(thrust::sqrt, thrust::sqrt, false, NO_FLAG, P4, "comment")
ENTRY(thrust::stable_partition, thrust::stable_partition, false, NO_FLAG, P4, "comment")
ENTRY(thrust::stable_partition_copy, thrust::stable_partition_copy, false, NO_FLAG, P4, "comment")
ENTRY(thrust::stable_sort, thrust::stable_sort, false, NO_FLAG, P4, "comment")
ENTRY(thrust::stable_sort_by_key, thrust::stable_sort_by_key, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::swap, thrust::swap, true, NO_FLAG, P4, "comment")
ENTRY(thrust::swap_ranges, thrust::swap_ranges, false, NO_FLAG, P4, "comment")
ENTRY(thrust::system_category, thrust::system_category, false, NO_FLAG, P4, "comment")
ENTRY(thrust::tabulate, thrust::tabulate, false, NO_FLAG, P4, "comment")
ENTRY(thrust::tan, thrust::tan, false, NO_FLAG, P4, "comment")
ENTRY(thrust::tanh, thrust::tanh, false, NO_FLAG, P4, "comment")
ENTRY(thrust::THRUST_PREVENT_MACRO_SUBSTITUTION, thrust::THRUST_PREVENT_MACRO_SUBSTITUTION, false, NO_FLAG, P4, "comment")
ENTRY(thrust::transform, thrust::transform, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::transform_exclusive_scan, thrust::transform_exclusive_scan, false, NO_FLAG, P4, "comment")
ENTRY(thrust::transform_if, thrust::transform_if, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::transform_inclusive_scan, thrust::transform_inclusive_scan, false, NO_FLAG, P4, "comment")
ENTRY(thrust::transform_reduce, thrust::transform_reduce, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::uninitialized_copy, thrust::uninitialized_copy, false, NO_FLAG, P4, "comment")
ENTRY(thrust::uninitialized_copy_n, thrust::uninitialized_copy_n, false, NO_FLAG, P4, "comment")
ENTRY(thrust::uninitialized_fill, thrust::uninitialized_fill, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::uninitialized_fill_n, thrust::uninitialized_fill_n, false, NO_FLAG, P4, "comment")
ENTRY(thrust::unique, thrust::unique, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::unique_by_key, thrust::unique_by_key, true, NO_FLAG, P4, "comment")
ENTRY(thrust::unique_by_key_copy, thrust::unique_by_key_copy, true, NO_FLAG, P4, "Successful")
ENTRY(thrust::unique_copy, thrust::unique_copy, false, NO_FLAG, P4, "comment")
ENTRY(thrust::upper_bound, thrust::upper_bound, true, NO_FLAG, P4, "Successful")
