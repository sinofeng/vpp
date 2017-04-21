/*
 * Copyright (c) 2015 Cisco and/or its affiliates.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __included_ipfix_info_elements_h__
#define __included_ipfix_info_elements_h__

#define foreach_ipfix_info_element_t                                    \
_(octetDeltaCount, 1, u64)                                              \
_(packetDeltaCount, 2, u64)                                             \
_(deltaFlowCount, 3, u64)                                               \
_(protocolIdentifier, 4, u8)                                            \
_(ipClassOfService, 5, u8)                                              \
_(tcpControlBits, 6, u16)                                               \
_(sourceTransportPort, 7, u16)                                          \
_(sourceIPv4Address, 8, ip4_address_t)                                  \
_(sourceIPv4PrefixLength, 9, u8)                                        \
_(ingressInterface, 10, u32)                                            \
_(destinationTransportPort, 11, u16)                                    \
_(destinationIPv4Address, 12, ip4_address_t)                            \
_(destinationIPv4PrefixLength, 13, u8)                                  \
_(egressInterface, 14, u32)                                             \
_(ipNextHopIPv4Address, 15, ip4_address_t)                              \
_(bgpSourceAsNumber, 16, u32)                                           \
_(bgpDestinationAsNumber, 17, u32)                                      \
_(bgpNextHopIPv4Address, 18, ip4_address_t)                             \
_(postMCastPacketDeltaCount, 19, u64)                                   \
_(postMCastOctetDeltaCount, 20, u64)                                    \
_(flowEndSysUpTime, 21, u32)                                            \
_(flowStartSysUpTime, 22, u32)                                          \
_(postOctetDeltaCount, 23, u64)                                         \
_(postPacketDeltaCount, 24, u64)                                        \
_(minimumIpTotalLength, 25, u64)                                        \
_(maximumIpTotalLength, 26, u64)                                        \
_(sourceIPv6Address, 27, ip6_address_t)                                 \
_(destinationIPv6Address, 28, ip6_address_t)                            \
_(sourceIPv6PrefixLength, 29, u8)                                       \
_(destinationIPv6PrefixLength, 30, u8)                                  \
_(flowLabelIPv6, 31, u32)                                               \
_(icmpTypeCodeIPv4, 32, u16)                                            \
_(igmpType, 33, u8)                                                     \
_(samplingInterval, 34, u32)                                            \
_(samplingAlgorithm, 35, u8)                                            \
_(flowActiveTimeout, 36, u16)                                           \
_(flowIdleTimeout, 37, u16)                                             \
_(engineType, 38, u8)                                                   \
_(engineId, 39, u8)                                                     \
_(exportedOctetTotalCount, 40, u64)                                     \
_(exportedMessageTotalCount, 41, u64)                                   \
_(exportedFlowRecordTotalCount, 42, u64)                                \
_(ipv4RouterSc, 43, ip4_address_t)                                      \
_(sourceIPv4Prefix, 44, ip4_address_t)                                  \
_(destinationIPv4Prefix, 45, ip4_address_t)                             \
_(mplsTopLabelType, 46, u8)                                             \
_(mplsTopLabelIPv4Address, 47, ip4_address_t)                           \
_(samplerId, 48, u8)                                                    \
_(samplerMode, 49, u8)                                                  \
_(samplerRandomInterval, 50, u32)                                       \
_(classId, 51, u8)                                                      \
_(minimumTTL, 52, u8)                                                   \
_(maximumTTL, 53, u8)                                                   \
_(fragmentIdentification, 54, u32)                                      \
_(postIpClassOfService, 55, u8)                                         \
_(sourceMacAddress, 56, macAddress)                                     \
_(postDestinationMacAddress, 57, macAddress)                            \
_(vlanId, 58, u16)                                                      \
_(postVlanId, 59, u16)                                                  \
_(ipVersion, 60, u8)                                                    \
_(flowDirection, 61, u8)                                                \
_(ipNextHopIPv6Address, 62, ip6_address_t)                              \
_(bgpNextHopIPv6Address, 63, ip6_address_t)                             \
_(ipv6ExtensionHeaders, 64, u32)                                        \
_(mplsTopLabelStackSection, 70, octetArray)                             \
_(mplsLabelStackSection2, 71, octetArray)                               \
_(mplsLabelStackSection3, 72, octetArray)                               \
_(mplsLabelStackSection4, 73, octetArray)                               \
_(mplsLabelStackSection5, 74, octetArray)                               \
_(mplsLabelStackSection6, 75, octetArray)                               \
_(mplsLabelStackSection7, 76, octetArray)                               \
_(mplsLabelStackSection8, 77, octetArray)                               \
_(mplsLabelStackSection9, 78, octetArray)                               \
_(mplsLabelStackSection10, 79, octetArray)                              \
_(destinationMacAddress, 80, macAddress)                                \
_(postSourceMacAddress, 81, macAddress)                                 \
_(interfaceName, 82, string)                                            \
_(interfaceDescription, 83, string)                                     \
_(samplerName, 84, string)                                              \
_(octetTotalCount, 85, u64)                                             \
_(packetTotalCount, 86, u64)                                            \
_(flagsAndSamplerId, 87, u32)                                           \
_(fragmentOffset, 88, u16)                                              \
_(forwardingStatus, 89, u32)                                            \
_(mplsVpnRouteDistinguisher, 90, octetArray)                            \
_(mplsTopLabelPrefixLength, 91, u8)                                     \
_(srcTrafficIndex, 92, u32)                                             \
_(dstTrafficIndex, 93, u32)                                             \
_(applicationDescription, 94, string)                                   \
_(applicationId, 95, octetArray)                                        \
_(applicationName, 96, string)                                          \
_(Assigned, 97, for NetFlow v9 compatibility	)                       \
_(postIpDiffServCodePoint, 98, u8)                                      \
_(multicastReplicationFactor, 99, u32)                                  \
_(className, 100, string)                                               \
_(classificationEngineId, 101, u8)                                      \
_(layer2packetSectionOffset, 102, u16)                                  \
_(layer2packetSectionSize, 103, u16)                                    \
_(layer2packetSectionData, 104, octetArray)                             \
_(bgpNextAdjacentAsNumber, 128, u32)                                    \
_(bgpPrevAdjacentAsNumber, 129, u32)                                    \
_(exporterIPv4Address, 130, ip4_address_t)                              \
_(exporterIPv6Address, 131, ip6_address_t)                              \
_(droppedOctetDeltaCount, 132, u64)                                     \
_(droppedPacketDeltaCount, 133, u64)                                    \
_(droppedOctetTotalCount, 134, u64)                                     \
_(droppedPacketTotalCount, 135, u64)                                    \
_(flowEndReason, 136, u8)                                               \
_(commonPropertiesId, 137, u64)                                         \
_(observationPointId, 138, u64)                                         \
_(icmpTypeCodeIPv6, 139, u16)                                           \
_(mplsTopLabelIPv6Address, 140, ip6_address_t)                          \
_(lineCardId, 141, u32)                                                 \
_(portId, 142, u32)                                                     \
_(meteringProcessId, 143, u32)                                          \
_(exportingProcessId, 144, u32)                                         \
_(templateId, 145, u16)                                                 \
_(wlanChannelId, 146, u8)                                               \
_(wlanSSID, 147, string)                                                \
_(flowId, 148, u64)                                                     \
_(observationDomainId, 149, u32)                                        \
_(flowStartSeconds, 150, dateTimeSeconds)                               \
_(flowEndSeconds, 151, dateTimeSeconds)                                 \
_(flowStartMilliseconds, 152, dateTimeMilliseconds)                     \
_(flowEndMilliseconds, 153, dateTimeMilliseconds)                       \
_(flowStartMicroseconds, 154, dateTimeMicroseconds)                     \
_(flowEndMicroseconds, 155, dateTimeMicroseconds)                       \
_(flowStartNanoseconds, 156, dateTimeNanoseconds)                       \
_(flowEndNanoseconds, 157, dateTimeNanoseconds)                         \
_(flowStartDeltaMicroseconds, 158, u32)                                 \
_(flowEndDeltaMicroseconds, 159, u32)                                   \
_(systemInitTimeMilliseconds, 160, dateTimeMilliseconds)                \
_(flowDurationMilliseconds, 161, u32)                                   \
_(flowDurationMicroseconds, 162, u32)                                   \
_(observedFlowTotalCount, 163, u64)                                     \
_(ignoredPacketTotalCount, 164, u64)                                    \
_(ignoredOctetTotalCount, 165, u64)                                     \
_(notSentFlowTotalCount, 166, u64)                                      \
_(notSentPacketTotalCount, 167, u64)                                    \
_(notSentOctetTotalCount, 168, u64)                                     \
_(destinationIPv6Prefix, 169, ip6_address_t)                            \
_(sourceIPv6Prefix, 170, ip6_address_t)                                 \
_(postOctetTotalCount, 171, u64)                                        \
_(postPacketTotalCount, 172, u64)                                       \
_(flowKeyIndicator, 173, u64)                                           \
_(postMCastPacketTotalCount, 174, u64)                                  \
_(postMCastOctetTotalCount, 175, u64)                                   \
_(icmpTypeIPv4, 176, u8)                                                \
_(icmpCodeIPv4, 177, u8)                                                \
_(icmpTypeIPv6, 178, u8)                                                \
_(icmpCodeIPv6, 179, u8)                                                \
_(udpSourcePort, 180, u16)                                              \
_(udpDestinationPort, 181, u16)                                         \
_(tcpSourcePort, 182, u16)                                              \
_(tcpDestinationPort, 183, u16)                                         \
_(tcpSequenceNumber, 184, u32)                                          \
_(tcpAcknowledgementNumber, 185, u32)                                   \
_(tcpWindowSize, 186, u16)                                              \
_(tcpUrgentPointer, 187, u16)                                           \
_(tcpHeaderLength, 188, u8)                                             \
_(ipHeaderLength, 189, u8)                                              \
_(totalLengthIPv4, 190, u16)                                            \
_(payloadLengthIPv6, 191, u16)                                          \
_(ipTTL, 192, u8)                                                       \
_(nextHeaderIPv6, 193, u8)                                              \
_(mplsPayloadLength, 194, u32)                                          \
_(ipDiffServCodePoint, 195, u8)                                         \
_(ipPrecedence, 196, u8)                                                \
_(fragmentFlags, 197, u8)                                               \
_(octetDeltaSumOfSquares, 198, u64)                                     \
_(octetTotalSumOfSquares, 199, u64)                                     \
_(mplsTopLabelTTL, 200, u8)                                             \
_(mplsLabelStackLength, 201, u32)                                       \
_(mplsLabelStackDepth, 202, u32)                                        \
_(mplsTopLabelExp, 203, u8)                                             \
_(ipPayloadLength, 204, u32)                                            \
_(udpMessageLength, 205, u16)                                           \
_(isMulticast, 206, u8)                                                 \
_(ipv4IHL, 207, u8)                                                     \
_(ipv4Options, 208, u32)                                                \
_(tcpOptions, 209, u64)                                                 \
_(paddingOctets, 210, octetArray)                                       \
_(collectorIPv4Address, 211, ip4_address_t)                             \
_(collectorIPv6Address, 212, ip6_address_t)                             \
_(exportInterface, 213, u32)                                            \
_(exportProtocolVersion, 214, u8)                                       \
_(exportTransportProtocol, 215, u8)                                     \
_(collectorTransportPort, 216, u16)                                     \
_(exporterTransportPort, 217, u16)                                      \
_(tcpSynTotalCount, 218, u64)                                           \
_(tcpFinTotalCount, 219, u64)                                           \
_(tcpRstTotalCount, 220, u64)                                           \
_(tcpPshTotalCount, 221, u64)                                           \
_(tcpAckTotalCount, 222, u64)                                           \
_(tcpUrgTotalCount, 223, u64)                                           \
_(ipTotalLength, 224, u64)                                              \
_(postNATSourceIPv4Address, 225, ip4_address_t)                         \
_(postNATDestinationIPv4Address, 226, ip4_address_t)                    \
_(postNAPTSourceTransportPort, 227, u16)                                \
_(postNAPTDestinationTransportPort, 228, u16)                           \
_(natOriginatingAddressRealm, 229, u8)                                  \
_(natEvent, 230, u8)                                                    \
_(initiatorOctets, 231, u64)                                            \
_(responderOctets, 232, u64)                                            \
_(firewallEvent, 233, u8)                                               \
_(ingressVRFID, 234, u32)                                               \
_(egressVRFID, 235, u32)                                                \
_(VRFname, 236, string)                                                 \
_(postMplsTopLabelExp, 237, u8)                                         \
_(tcpWindowScale, 238, u16)                                             \
_(biflowDirection, 239, u8)                                             \
_(ethernetHeaderLength, 240, u8)                                        \
_(ethernetPayloadLength, 241, u16)                                      \
_(ethernetTotalLength, 242, u16)                                        \
_(dot1qVlanId, 243, u16)                                                \
_(dot1qPriority, 244, u8)                                               \
_(dot1qCustomerVlanId, 245, u16)                                        \
_(dot1qCustomerPriority, 246, u8)                                       \
_(metroEvcId, 247, string)                                              \
_(metroEvcType, 248, u8)                                                \
_(pseudoWireId, 249, u32)                                               \
_(pseudoWireType, 250, u16)                                             \
_(pseudoWireControlWord, 251, u32)                                      \
_(ingressPhysicalInterface, 252, u32)                                   \
_(egressPhysicalInterface, 253, u32)                                    \
_(postDot1qVlanId, 254, u16)                                            \
_(postDot1qCustomerVlanId, 255, u16)                                    \
_(ethernetType, 256, u16)                                               \
_(postIpPrecedence, 257, u8)                                            \
_(collectionTimeMilliseconds, 258, dateTimeMilliseconds)                \
_(exportSctpStreamId, 259, u16)                                         \
_(maxExportSeconds, 260, dateTimeSeconds)                               \
_(maxFlowEndSeconds, 261, dateTimeSeconds)                              \
_(messageMD5Checksum, 262, octetArray)                                  \
_(messageScope, 263, u8)                                                \
_(minExportSeconds, 264, dateTimeSeconds)                               \
_(minFlowStartSeconds, 265, dateTimeSeconds)                            \
_(opaqueOctets, 266, octetArray)                                        \
_(sessionScope, 267, u8)                                                \
_(maxFlowEndMicroseconds, 268, dateTimeMicroseconds)                    \
_(maxFlowEndMilliseconds, 269, dateTimeMilliseconds)                    \
_(maxFlowEndNanoseconds, 270, dateTimeNanoseconds)                      \
_(minFlowStartMicroseconds, 271, dateTimeMicroseconds)                  \
_(minFlowStartMilliseconds, 272, dateTimeMilliseconds)                  \
_(minFlowStartNanoseconds, 273, dateTimeNanoseconds)                    \
_(collectorCertificate, 274, octetArray)                                \
_(exporterCertificate, 275, octetArray)                                 \
_(dataRecordsReliability, 276, boolean)                                 \
_(observationPointType, 277, u8)                                        \
_(newConnectionDeltaCount, 278, u32)                                    \
_(connectionSumDurationSeconds, 279, u64)                               \
_(connectionTransactionId, 280, u64)                                    \
_(postNATSourceIPv6Address, 281, ip6_address_t)                         \
_(postNATDestinationIPv6Address, 282, ip6_address_t)                    \
_(natPoolId, 283, u32)                                                  \
_(natPoolName, 284, string)                                             \
_(anonymizationFlags, 285, u16)                                         \
_(anonymizationTechnique, 286, u16)                                     \
_(informationElementIndex, 287, u16)                                    \
_(p2pTechnology, 288, string)                                           \
_(tunnelTechnology, 289, string)                                        \
_(encryptedTechnology, 290, string)                                     \
_(basicList, 291, basicList)                                            \
_(subTemplateList, 292, subTemplateList)                                \
_(subTemplateMultiList, 293, subTemplateMultiList)                      \
_(bgpValidityState, 294, u8)                                            \
_(IPSecSPI, 295, u32)                                                   \
_(greKey, 296, u32)                                                     \
_(natType, 297, u8)                                                     \
_(initiatorPackets, 298, u64)                                           \
_(responderPackets, 299, u64)                                           \
_(observationDomainName, 300, string)                                   \
_(selectionSequenceId, 301, u64)                                        \
_(selectorId, 302, u64)                                                 \
_(informationElementId, 303, u16)                                       \
_(selectorAlgorithm, 304, u16)                                          \
_(samplingPacketInterval, 305, u32)                                     \
_(samplingPacketSpace, 306, u32)                                        \
_(samplingTimeInterval, 307, u32)                                       \
_(samplingTimeSpace, 308, u32)                                          \
_(samplingSize, 309, u32)                                               \
_(samplingPopulation, 310, u32)                                         \
_(samplingProbability, 311, float64)                                    \
_(dataLinkFrameSize, 312, u16)                                          \
_(ipHeaderPacketSection, 313, octetArray)                               \
_(ipPayloadPacketSection, 314, octetArray)                              \
_(dataLinkFrameSection, 315, octetArray)                                \
_(mplsLabelStackSection, 316, octetArray)                               \
_(mplsPayloadPacketSection, 317, octetArray)                            \
_(selectorIdTotalPktsObserved, 318, u64)                                \
_(selectorIdTotalPktsSelected, 319, u64)                                \
_(absoluteError, 320, float64)                                          \
_(relativeError, 321, float64)                                          \
_(observationTimeSeconds, 322, dateTimeSeconds)                         \
_(observationTimeMilliseconds, 323, dateTimeMilliseconds)               \
_(observationTimeMicroseconds, 324, dateTimeMicroseconds)               \
_(observationTimeNanoseconds, 325, dateTimeNanoseconds)                 \
_(digestHashValue, 326, u64)                                            \
_(hashIPPayloadOffset, 327, u64)                                        \
_(hashIPPayloadSize, 328, u64)                                          \
_(hashOutputRangeMin, 329, u64)                                         \
_(hashOutputRangeMax, 330, u64)                                         \
_(hashSelectedRangeMin, 331, u64)                                       \
_(hashSelectedRangeMax, 332, u64)                                       \
_(hashDigestOutput, 333, boolean)                                       \
_(hashInitialiserValue, 334, u64)                                       \
_(selectorName, 335, string)                                            \
_(upperCILimit, 336, float64)                                           \
_(lowerCILimit, 337, float64)                                           \
_(confidenceLevel, 338, float64)                                        \
_(informationElementDataType, 339, u8)                                  \
_(informationElementDescription, 340, string)                           \
_(informationElementName, 341, string)                                  \
_(informationElementRangeBegin, 342, u64)                               \
_(informationElementRangeEnd, 343, u64)                                 \
_(informationElementSemantics, 344, u8)                                 \
_(informationElementUnits, 345, u16)                                    \
_(privateEnterpriseNumber, 346, u32)                                    \
_(virtualStationInterfaceId, 347, octetArray)                           \
_(virtualStationInterfaceName, 348, string)                             \
_(virtualStationUUID, 349, octetArray)                                  \
_(virtualStationName, 350, string)                                      \
_(layer2SegmentId, 351, u64)                                            \
_(layer2OctetDeltaCount, 352, u64)                                      \
_(layer2OctetTotalCount, 353, u64)                                      \
_(ingressUnicastPacketTotalCount, 354, u64)                             \
_(ingressMulticastPacketTotalCount, 355, u64)                           \
_(ingressBroadcastPacketTotalCount, 356, u64)                           \
_(egressUnicastPacketTotalCount, 357, u64)                              \
_(egressBroadcastPacketTotalCount, 358, u64)                            \
_(monitoringIntervalStartMilliSeconds, 359, dateTimeMilliseconds)       \
_(monitoringIntervalEndMilliSeconds, 360, dateTimeMilliseconds)         \
_(portRangeStart, 361, u16)                                             \
_(portRangeEnd, 362, u16)                                               \
_(portRangeStepSize, 363, u16)                                          \
_(portRangeNumPorts, 364, u16)                                          \
_(staMacAddress, 365, macAddress)                                       \
_(staIPv4Address, 366, ip4_address_t)                                   \
_(wtpMacAddress, 367, macAddress )                                      \
_(ingressInterfaceType, 368, u32)                                       \
_(egressInterfaceType, 369, u32)                                        \
_(rtpSequenceNumber, 370, u16)                                          \
_(userName, 371, string)                                                \
_(applicationCategoryName, 372, string)                                 \
_(applicationSubCategoryName, 373, string)                              \
_(applicationGroupName, 374, string)                                    \
_(originalFlowsPresent, 375, u64)                                       \
_(originalFlowsInitiated, 376, u64)                                     \
_(originalFlowsCompleted, 377, u64)                                     \
_(distinctCountOfSourceIPAddress, 378, u64)                             \
_(distinctCountOfDestinationIPAddress, 379, u64)                        \
_(distinctCountOfSourceIPv4Address, 380, u32)                           \
_(distinctCountOfDestinationIPv4Address, 381, u32)                      \
_(distinctCountOfSourceIPv6Address, 382, u64)                           \
_(distinctCountOfDestinationIPv6Address, 383, u64)                      \
_(valueDistributionMethod, 384, u8)                                     \
_(rfc3550JitterMilliseconds, 385, u32)                                  \
_(rfc3550JitterMicroseconds, 386, u32)                                  \
_(rfc3550JitterNanoseconds, 387, u32)                                   \
_(dot1qDEI, 388, boolean)                                               \
_(dot1qCustomerDEI, 389, boolean)                                       \
_(flowSelectorAlgorithm, 390, u16)                                      \
_(flowSelectedOctetDeltaCount, 391, u64)                                \
_(flowSelectedPacketDeltaCount, 392, u64)                               \
_(flowSelectedFlowDeltaCount, 393, u64)                                 \
_(selectorIDTotalFlowsObserved, 394, u64)                               \
_(selectorIDTotalFlowsSelected, 395, u64)                               \
_(samplingFlowInterval, 396, u64)                                       \
_(samplingFlowSpacing, 397, u64)                                        \
_(flowSamplingTimeInterval, 398, u64)                                   \
_(flowSamplingTimeSpacing, 399, u64)                                    \
_(hashFlowDomain, 400, u16)                                             \
_(transportOctetDeltaCount, 401, u64)                                   \
_(transportPacketDeltaCount, 402, u64)                                  \
_(originalExporterIPv4Address, 403, ip4_address_t)                      \
_(originalExporterIPv6Address, 404, ip6_address_t)                      \
_(originalObservationDomainId, 405, u32)                                \
_(intermediateProcessId, 406, u32)                                      \
_(ignoredDataRecordTotalCount, 407, u64)                                \
_(dataLinkFrameType, 408, u16)                                          \
_(sectionOffset, 409, u16)                                              \
_(sectionExportedOctets, 410, u16)                                      \
_(dot1qServiceInstanceTag, 411, octetArray)                             \
_(dot1qServiceInstanceId, 412, u32)                                     \
_(dot1qServiceInstancePriority, 413, u8)                                \
_(dot1qCustomerSourceMacAddress, 414, macAddress)                       \
_(dot1qCustomerDestinationMacAddress, 415, macAddress)                  \
_(postLayer2OctetDeltaCount, 417, u64)                                  \
_(postMCastLayer2OctetDeltaCount, 418, u64)                             \
_(postLayer2OctetTotalCount, 420, u64)                                  \
_(postMCastLayer2OctetTotalCount, 421, u64)                             \
_(minimumLayer2TotalLength, 422, u64)                                   \
_(maximumLayer2TotalLength, 423, u64)                                   \
_(droppedLayer2OctetDeltaCount, 424, u64)                               \
_(droppedLayer2OctetTotalCount, 425, u64)                               \
_(ignoredLayer2OctetTotalCount, 426, u64)                               \
_(notSentLayer2OctetTotalCount, 427, u64)                               \
_(layer2OctetDeltaSumOfSquares, 428, u64)                               \
_(layer2OctetTotalSumOfSquares, 429, u64)                               \
_(layer2FrameDeltaCount, 430, u64)                                      \
_(layer2FrameTotalCount, 431, u64)                                      \
_(pseudoWireDestinationIPv4Address, 432, ip4_address_t)                 \
_(ignoredLayer2FrameTotalCount, 433, u64)

typedef enum {
#define _(n,v,t) n = v,
  foreach_ipfix_info_element_t
#undef _
} ipfix_info_element_id_t;

#endif /* __included_ipfix_info_elements_h__ */
