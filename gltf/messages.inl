/*
 * Copyright 2019 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GLTF_MSG0
#define GLTF_MSG0(severity, id, format, ...) GLTF_MSG(severity, id, format)
#define GLTF_MSG1(severity, id, format, ...) GLTF_MSG(severity, id, format)
#define GLTF_MSG2(severity, id, format, ...) GLTF_MSG(severity, id, format)
#define GLTF_MSG3(severity, id, format, ...) GLTF_MSG(severity, id, format)
#define GLTF_MSG4(severity, id, format, ...) GLTF_MSG(severity, id, format)
#define GLTF_MSG5(severity, id, format, ...) GLTF_MSG(severity, id, format)
#endif  // GLTF_MSG0

GLTF_MSG1(ERROR, NOT_IMPLEMENTED, "NOT_IMPLEMENTED: %s", const char *, function)
GLTF_MSG1(ERROR, BAD_VERSION, "Unsupported glTF version: %s", const char *,
          version)
GLTF_MSG1(WARN, MISSING_FIELD, "Missing field: '%s'", const char *, name)
GLTF_MSG1(ERROR, MISSING_FIELD, "Missing field: '%s'", const char *, name)
GLTF_MSG0(ERROR, EXPECTED_ARRAY, "Expected array.")
GLTF_MSG0(ERROR, EMPTY_ARRAY, "Empty array.")
GLTF_MSG1(ERROR, MISSING_ARRAY_ELEMENT, "Missing array element: %zu", size_t,
          index)
GLTF_MSG2(ERROR, BAD_ARRAY_LENGTH, "Incorrect array length %zu (expected %zu).",
          size_t, count, size_t, expected)
GLTF_MSG0(ERROR, EXPECTED_ENUM_STRING, "Expected enum string field.")
GLTF_MSG0(ERROR, EMPTY_ENUM, "Empty enum name.")
GLTF_MSG2(WARN, BAD_ENUM_STRING,
          "Unrecognized enum value: '%s'. Expected one of: %s", const char *,
          value, const char *, expected)
GLTF_MSG2(ERROR, BAD_ENUM_STRING,
          "Unrecognized enum value: '%s'. Expected one of: %s", const char *,
          value, const char *, expected)
GLTF_MSG0(ERROR, EXPECTED_ENUM_INT, "Expected enum integer field.")
GLTF_MSG2(ERROR, BAD_ENUM_INT,
          "Unrecognized enum value: '%d'. Expected one of: %s", int, value,
          const char *, expected)
GLTF_MSG0(ERROR, EXPECTED_STRING, "Expected string field.")
GLTF_MSG0(ERROR, EXPECTED_BOOL, "Expected boolean field.")
GLTF_MSG0(ERROR, EXPECTED_INT, "Expected integer field.")
GLTF_MSG2(ERROR, INT_OUT_OF_RANGE, "Integer value %d out of range [0, %u].",
          int, value, uint32_t, max)
GLTF_MSG1(ERROR, EXPECTED_UINT_IS_FLOAT,
          "Expected unsigned integer field, found float (%f).", float, value)
GLTF_MSG0(ERROR, EXPECTED_UINT, "Expected unsigned integer field.")
GLTF_MSG2(ERROR, UINT_OUT_OF_RANGE, "Integer value %u out of range [0, %u].",
          uint32_t, value, uint32_t, max)
GLTF_MSG0(ERROR, EXPECTED_FLOAT, "Expected float field.")
GLTF_MSG0(ERROR, FLOAT_NAN, "Float field not-a-number.")
GLTF_MSG0(ERROR, EXPECTED_ID, "Expected integer ID field.")
GLTF_MSG1(WARN, EXTENSION_UNSUPPORTED, "Unsupported extension: %s",
          const char *, extension)
GLTF_MSG1(WARN, EXTENSION_UNUSED, "Unused extension: %s", const char *,
          extension)
GLTF_MSG0(WARN, EXTENSIONS_FIELD_UNUSED, "Unused extensions field.")
GLTF_MSG1(WARN, EXTENSION_MISSING_USED,
          "Referenced extension missing in extensionsUsed: %s", const char *,
          extension)
GLTF_MSG1(ERROR, EXTENSION_REQUIRED_UNUSED,
          "Required extension missing in extensionsUsed: %s", const char *,
          extension)
GLTF_MSG1(WARN, EXTENSION_UNREFERENCED,
          "Extension is in extensionsUsed but not actually referenced: %s",
          const char *, extension)
GLTF_MSG1(WARN, EXTENSION_DUPLICATE, "Duplicate extension: %s", const char *,
          extension)
GLTF_MSG2(INFO, EXTRA_UNUSED, "%s%s", const char *, key, const char *, brief)
GLTF_MSG0(ERROR, EXPECTED_URI, "Expected URI string field.")
GLTF_MSG0(ERROR, BAD_URI_DATA_FORMAT, "Unsupported data URI format.")
GLTF_MSG2(ERROR, BAD_SPARSE_INDICES_FORMAT,
          "Sparse indices have type %s(%u). Expected one of: "
          "UNSIGNED_BYTE(5121), UNSIGNED_SHORT(5123), or UNSIGNED_INT(5125).",
          const char *, type, uint32_t, value)
GLTF_MSG1(ERROR, BAD_SEMANTIC, "Unrecognized attribute semantic: %s",
          const char *, semantic)
GLTF_MSG0(ERROR, MISSING_ACCESSOR, "Missing attribute accessor.")
GLTF_MSG1(ERROR, DUPLICATE_ATTR, "Duplicate attribute: %s", const char *, attr)
GLTF_MSG1(ERROR, SKIN_WITHOUT_MESH, "Node has skin(%zu) but no mesh.", size_t,
          skin_index)
GLTF_MSG1(ERROR, MISSING_BUFFER, "Missing buffer: %s", const char *, ref)
GLTF_MSG1(ERROR, MISSING_IMAGE, "Missing image: %s", const char *, ref)
GLTF_MSG1(ERROR, JSON_PARSE, "Failed parsing JSON: %s", const char *,
          parse_error)
GLTF_MSG2(ERROR, ID_OUT_OF_RANGE, "ID %zu out of range (max=%zu).", size_t, id,
          size_t, id_max)
GLTF_MSG2(WARN, OFFSET_OUTSIDE_BUFFER_VIEW,
          "Offset %zu outside buffer view size %u.", size_t, offset, size_t,
          size)
GLTF_MSG2(ERROR, OFFSET_OUTSIDE_BUFFER_VIEW,
          "Offset %zu outside buffer view size %u.", size_t, offset, size_t,
          size)
GLTF_MSG4(ERROR, COMPONENT_EXCEEDS_STRIDE,
          "%s[%s] size %zu does not fit in buffer view stride %zu.",
          const char *, type, const char *, component, size_t, size, size_t,
          stride)
GLTF_MSG2(WARN, SIZE_EXCEEDS_BUFFER_VIEW,
          "Total size %zu exceeds buffer view space %td.", size_t, size,
          ptrdiff_t, space)
GLTF_MSG2(ERROR, SIZE_EXCEEDS_BUFFER_VIEW,
          "Total size %zu exceeds buffer view space %td.", size_t, size,
          ptrdiff_t, space)
GLTF_MSG2(ERROR, NON_MULTIPLE_SIZE,
          "Output size %zu is not a multiple of output component count %zu.",
          size_t, size, size_t, component_count)
GLTF_MSG2(ERROR, INPUT_OUTPUT_SIZE_MISMATCH,
          "Mismatched input(%zu) and output(%zu) sizes.", size_t, input_size,
          size_t, output_size)
GLTF_MSG0(
    ERROR, NO_MORPH_WEIGHTS,
    "Morph-target weight animation targets node without morph target weights.")
GLTF_MSG2(ERROR, BAD_MORPH_WEIGHT_FORMAT,
          "Incorrect morph-target weight animation format %s[%s] (expected "
          "SCALAR[FLOAT]).",
          const char *, type, const char *, component)
GLTF_MSG1(ERROR, BAD_TIME_INPUT_FORMAT, "Time input (%s) is not SCALAR.",
          const char *, type)
GLTF_MSG4(
    ERROR, ANIMATION_CHANNEL_CONFLICT,
    "Animation channels %zu and %zu conflict, both animating node %zu %s.",
    size_t, channel0, size_t, channel1, size_t, node_index, const char *,
    node_path)
GLTF_MSG2(ERROR, VIEW_OFFSET_GT_BUFFER_SIZE,
          "Buffer view offset %zu exceeds buffer size %zu.", size_t, offset,
          size_t, size)
GLTF_MSG2(ERROR, VIEW_SIZE_GT_BUFFER_SPACE,
          "Buffer view size %zu exceeds buffer space %td.", size_t, size,
          ptrdiff_t, space)
GLTF_MSG0(ERROR, CAMERA_XMAG_0, "Camera xmag is 0.")
GLTF_MSG0(ERROR, CAMERA_YMAG_0, "Camera ymag is 0.")
GLTF_MSG2(ERROR, CAMERA_ZNEAR_PAST_ZFAR, "Camera znear(%f) is >= zfar(%f).",
          float, znear, float, zfar)
GLTF_MSG1(ERROR, CAMERA_ASPECT_RATIO_LT_0, "Camera aspectRatio(%f) is < 0.",
          float, aspect_ratio)
GLTF_MSG1(ERROR, CAMERA_YFOV_LE_0, "Camera yfov(%f) is <= 0.", float, yfov)
GLTF_MSG3(WARN, ATTR_VERT_COUNT_MISMATCH,
          "%s attribute has incorrect number of vertices %zu (expected %zu).",
          const char *, attr, size_t, attr_count, size_t, vert_count)
GLTF_MSG3(ERROR, ATTR_VERT_COUNT_MISMATCH,
          "%s attribute has incorrect number of vertices %zu (expected %zu).",
          const char *, attr, size_t, attr_count, size_t, vert_count)
GLTF_MSG4(ERROR, ATTR_BAD_COMPONENT_COUNT,
          "%s attribute has invalid number of components %zu (expected range "
          "[%zu, %zu]).",
          const char *, attr, size_t, count, size_t, min, size_t, max)
GLTF_MSG1(ERROR, ATTR_JOINTS_ARE_FLOAT, "%s attribute is FLOAT.", const char *,
          attr)
GLTF_MSG3(ERROR, ATTR_INDEX_OUT_OF_RANGE,
          "%s attribute index %zu out of range (max=%zu)", const char *, attr,
          size_t, index, size_t, max)
GLTF_MSG2(ERROR, ATTR_NOT_IN_SUPERSET,
          "%s attribute does not belong to the superset: {%s}", const char *,
          attr, const char *, superset)
GLTF_MSG2(WARN, MESH_MISSING_TEXCOORD,
          "Mesh missing TEXCOORD_%u referenced by %s texture input.", uint32_t,
          index, const char *, input)
GLTF_MSG2(ERROR, SKIN_JOINT_WEIGHT_MISMATCH, "Have %s without %s.",
          const char *, attr0, const char *, attr1)
GLTF_MSG0(ERROR, MISSING_POSITION, "Missing POSITION attribute.")
GLTF_MSG2(ERROR, BAD_INDICES_FORMAT,
          "Incompatible indices component type: %s[%s]. Indices must be "
          "unsigned scalar.",
          const char *, type, const char *, component)
GLTF_MSG2(ERROR, BAD_PRIMITIVE_INDEX_COUNT,
          "Invalid number of %s primitive indices: %zu.", const char *, prim,
          size_t, index_count)
GLTF_MSG2(ERROR, MORPH_TARGET_MISMATCH,
          "Primitive has %zu morph targets but mesh has %zu weights.", size_t,
          target_count, size_t, weight_count)
GLTF_MSG2(ERROR, MORPH_WEIGHT_MISMATCH,
          "Node has %zu morph target weights but mesh has %zu.", size_t,
          node_weight_count, size_t, mesh_weight_count)
GLTF_MSG1(ERROR, MORPH_NO_MESH,
          "Node has %zu morph target weights without a mesh.", size_t,
          weight_count)
GLTF_MSG2(ERROR, BAD_INV_BIND_FORMAT,
          "Unsupported inverseBindMatrices type: %s[%s]", const char *, type,
          const char *, component)
GLTF_MSG2(ERROR, SKIN_JOINT_BIND_MISMATCH,
          "Mismatched number of joints(%zu) and inverseBindMatrices(%zu).",
          size_t, count_count, size_t, mat_count)
GLTF_MSG1(ERROR, NODE_LOOP, "Node hierarchy contains loop: %s", const char *,
          loop)
GLTF_MSG3(WARN, SCALAR_OUT_OF_RANGE, "Value %f out of range [%f, %f].", float,
          value, float, lower, float, upper)
GLTF_MSG3(WARN, VECTOR_OUT_OF_RANGE, "Value <%s> out of range [%f, %f].",
          const char *, value, float, lower, float, upper)
GLTF_MSG1(ERROR, BAD_BUFFER_ID, "Invalid buffer ID: %zu", size_t, buffer_index)
GLTF_MSG1(ERROR, BAD_IMAGE_ID, "Invalid image ID: %zu", size_t, image_index)
GLTF_MSG1(ERROR, IO_OPEN_READ, "Cannot open file for read: %s", const char *,
          path)
GLTF_MSG1(ERROR, IO_OPEN_WRITE, "Cannot open file for write: %s", const char *,
          path)
GLTF_MSG3(ERROR, IO_READ, "Cannot read %zu bytes at position %zu in file: %s",
          size_t, size, size_t, offset, const char *, path)
GLTF_MSG3(ERROR, IO_READ_LONG, "Read offset %zu is past end of file %zu: %s",
          size_t, start, size_t, file_size, const char *, path)
GLTF_MSG2(ERROR, IO_WRITE, "Failed writing %zu bytes to file: %s", size_t, size,
          const char *, dst_path)
GLTF_MSG1(ERROR, IO_WRITE_FILE, "Failed writing file: \"%s\"", const char *,
          path)
GLTF_MSG3(ERROR, IO_COPY, "Failed copying file: \"%s%s\" --> \"%s\"",
          const char *, src_prefix, const char *, src, const char *, dst)
GLTF_MSG2(ERROR, IO_SEEK, "Failed seeking to position %zu in file: %s", size_t,
          start, const char *, path)
GLTF_MSG1(ERROR, BUFFER_NO_PATH, "Buffer %zu: pathless.", size_t, buffer_index)
GLTF_MSG1(ERROR, IMAGE_UNKNOWN_EXTENSION, "Unrecognized image extension: %s",
          const char *, path)
GLTF_MSG0(ERROR, IMAGE_UNKNOWN_TYPE, "Unrecognized embedded image type.")
GLTF_MSG1(ERROR, IMAGE_NO_URI, "Image missing URI: %zu", size_t, image_index)
GLTF_MSG1(ERROR, GLB_MISSING_CHUNK, "GLB: Missing chunk: %zu.", size_t,
          buffer_index)
GLTF_MSG3(ERROR, GLB_SIZE_MISMATCH,
          "GLB: Size mismatch between buffer %zu(%zu) and chunk(%zu).", size_t,
          buffer_index, size_t, size, size_t, chunk_size)
GLTF_MSG3(ERROR, GLB_FILE_TOO_SMALL,
          "GLB: File size %zu too small (expected at least %zu): %s", size_t,
          file_size, size_t, size_min, const char *, path)
GLTF_MSG3(ERROR, GLB_BAD_FORMAT,
          "GLB: Unsupported file format (magic=0x%08x, expected=0x%08x): %s",
          uint32_t, magic, uint32_t, expected_magic, const char *, path)
GLTF_MSG3(ERROR, GLB_BAD_VERSION,
          "GLB: Unsupported file version %u (expected %u): %s", uint32_t,
          version, uint32_t, expected_version, const char *, path)
GLTF_MSG3(ERROR, GLB_BAD_SIZE,
          "GLB: Invalid file length %zu (expected %zu): %s", size_t,
          header_file_size, size_t, actual_file_size, const char *, path)
GLTF_MSG5(
    ERROR, GLB_CHUNK_TOO_LARGE,
    "GLB: Chunk %zu (offset %zu) size %zu too large (expected max %zu): %s",
    size_t, chunk_index, size_t, chunk_offset, size_t, chunk_len, size_t, max,
    const char *, path)
GLTF_MSG4(WARN, GLB_EXTRA_CHUNK,
          "GLB: Skipping extraneous glTF chunk %zu (offset=%zu, size=%zu): %s",
          size_t, index, size_t, offset, size_t, chunk_len, const char *, path)
GLTF_MSG5(INFO, GLB_UNKNOWN_CHUNK,
          "GLB: Skipping unrecognized chunk %zu (type=0x%08x, offset=%zu, "
          "size=%zu): %s",
          size_t, index, uint32_t, type, size_t, offset, size_t, chunk_len,
          const char *, path)
GLTF_MSG1(ERROR, GLB_NO_GLTF_CHUNK, "GLB: Missing glTF chunk: %s", const char *,
          path)
GLTF_MSG3(ERROR, GLB_READ_LONG,
          "GLB: Read offset %zu is past end of chunk%zu %zu.", size_t, start,
          size_t, chunk_index, size_t, chunk_size)
GLTF_MSG3(ERROR, FILE_TRUNCATED,
          "File size %zu appears truncated (expected at least %zu): %s", size_t,
          size, size_t, expected, const char *, name)
GLTF_MSG3(ERROR, IMAGE_ZERO_SIZE, "Zero size dimensions %dx%d: %s", int, width,
          int, height, const char *, name)
GLTF_MSG4(ERROR, BMP_BAD_HEADER_SIZES,
          "BMP: Incorrect header file size (%zu) and/or pixel offset (%zu) "
          "(must be at least %zu): %s",
          size_t, file_size, size_t, pixel_offset, size_t, min, const char *,
          name)
GLTF_MSG2(ERROR, JPG_TRUNCATED, "JPG: Truncated file size %zu: %s", size_t,
          size, const char *, name)
GLTF_MSG1(ERROR, JPG_SOI_MISSING, "JPG: Missing SOI (Start Of Image): %s",
          const char *, name)
GLTF_MSG1(ERROR, JPG_SOF_MISSING, "JPG: Missing SOF (Start Of Frame): %s",
          const char *, name)
GLTF_MSG3(ERROR, JPG_SOF_SHORT,
          "JPG: SOF (Start Of Frame) length %zu too short (expected at least "
          "%zu): %s",
          size_t, len, size_t, len_min, const char *, name)
GLTF_MSG2(ERROR, JPG_BAD_BIT_COUNT,
          "JPG: Unsupported bit-count of %zu (only 8-bit supported): %s",
          size_t, bit_count, const char *, name)
GLTF_MSG2(ERROR, JPG_BAD_COMPONENT_COUNT,
          "JPG: Unsupported component count of %d (expected 1, 3, or 4): %s",
          int, component_count, const char *, name)
GLTF_MSG1(ERROR, PNG_IHDR_MISSING, "PNG: Missing IHDR chunk: %s", const char *,
          name)
GLTF_MSG3(ERROR, PNG_IHDR_SIZE,
          "PNG: Incorrect IHDR chunk size %zu (expected %zu): %s", size_t, len,
          size_t, expected, const char *, name)
GLTF_MSG4(ERROR, PNG_TOO_LARGE, "PNG: Dimensions %ux%u too large (max %u): %s",
          uint32_t, width, uint32_t, height, uint32_t, max, const char *, path)
GLTF_MSG2(ERROR, PNG_BAD_DEPTH,
          "PNG: Unsupported bit-depth of %u (must be 1, 2, 4, 8, or 16): %s",
          uint32_t, depth, const char *, path)
GLTF_MSG2(ERROR, PNG_BAD_COLOR,
          "PNG: Unsupported color type %u (must be 0, 2, 3, 4, or 6): %s",
          uint32_t, color, const char *, path)
GLTF_MSG2(ERROR, PNG_BAD_COMP,
          "PNG: Unsupported comp method %u (must be 0): %s", uint32_t, comp,
          const char *, path)
GLTF_MSG2(ERROR, PNG_BAD_FILTER,
          "PNG: Unsupported filter method %u (must be 0): %s", uint32_t, filter,
          const char *, path)

#undef GLTF_MSG
#undef GLTF_MSG0
#undef GLTF_MSG1
#undef GLTF_MSG2
#undef GLTF_MSG3
#undef GLTF_MSG4
#undef GLTF_MSG5
