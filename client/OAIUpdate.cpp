/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIUpdate::OAIUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUpdate::OAIUpdate() {
    this->initializeModel();
}

OAIUpdate::~OAIUpdate() {}

void OAIUpdate::initializeModel() {

    m_update_id_isSet = false;
    m_update_id_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_edited_message_isSet = false;
    m_edited_message_isValid = false;

    m_channel_post_isSet = false;
    m_channel_post_isValid = false;

    m_edited_channel_post_isSet = false;
    m_edited_channel_post_isValid = false;

    m_business_connection_isSet = false;
    m_business_connection_isValid = false;

    m_business_message_isSet = false;
    m_business_message_isValid = false;

    m_edited_business_message_isSet = false;
    m_edited_business_message_isValid = false;

    m_deleted_business_messages_isSet = false;
    m_deleted_business_messages_isValid = false;

    m_message_reaction_isSet = false;
    m_message_reaction_isValid = false;

    m_message_reaction_count_isSet = false;
    m_message_reaction_count_isValid = false;

    m_inline_query_isSet = false;
    m_inline_query_isValid = false;

    m_chosen_inline_result_isSet = false;
    m_chosen_inline_result_isValid = false;

    m_callback_query_isSet = false;
    m_callback_query_isValid = false;

    m_shipping_query_isSet = false;
    m_shipping_query_isValid = false;

    m_pre_checkout_query_isSet = false;
    m_pre_checkout_query_isValid = false;

    m_purchased_paid_media_isSet = false;
    m_purchased_paid_media_isValid = false;

    m_poll_isSet = false;
    m_poll_isValid = false;

    m_poll_answer_isSet = false;
    m_poll_answer_isValid = false;

    m_my_chat_member_isSet = false;
    m_my_chat_member_isValid = false;

    m_chat_member_isSet = false;
    m_chat_member_isValid = false;

    m_chat_join_request_isSet = false;
    m_chat_join_request_isValid = false;

    m_chat_boost_isSet = false;
    m_chat_boost_isValid = false;

    m_removed_chat_boost_isSet = false;
    m_removed_chat_boost_isValid = false;
}

void OAIUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUpdate::fromJsonObject(QJsonObject json) {

    m_update_id_isValid = ::tele_rest::fromJsonValue(m_update_id, json[QString("update_id")]);
    m_update_id_isSet = !json[QString("update_id")].isNull() && m_update_id_isValid;

    m_message_isValid = ::tele_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_edited_message_isValid = ::tele_rest::fromJsonValue(m_edited_message, json[QString("edited_message")]);
    m_edited_message_isSet = !json[QString("edited_message")].isNull() && m_edited_message_isValid;

    m_channel_post_isValid = ::tele_rest::fromJsonValue(m_channel_post, json[QString("channel_post")]);
    m_channel_post_isSet = !json[QString("channel_post")].isNull() && m_channel_post_isValid;

    m_edited_channel_post_isValid = ::tele_rest::fromJsonValue(m_edited_channel_post, json[QString("edited_channel_post")]);
    m_edited_channel_post_isSet = !json[QString("edited_channel_post")].isNull() && m_edited_channel_post_isValid;

    m_business_connection_isValid = ::tele_rest::fromJsonValue(m_business_connection, json[QString("business_connection")]);
    m_business_connection_isSet = !json[QString("business_connection")].isNull() && m_business_connection_isValid;

    m_business_message_isValid = ::tele_rest::fromJsonValue(m_business_message, json[QString("business_message")]);
    m_business_message_isSet = !json[QString("business_message")].isNull() && m_business_message_isValid;

    m_edited_business_message_isValid = ::tele_rest::fromJsonValue(m_edited_business_message, json[QString("edited_business_message")]);
    m_edited_business_message_isSet = !json[QString("edited_business_message")].isNull() && m_edited_business_message_isValid;

    m_deleted_business_messages_isValid = ::tele_rest::fromJsonValue(m_deleted_business_messages, json[QString("deleted_business_messages")]);
    m_deleted_business_messages_isSet = !json[QString("deleted_business_messages")].isNull() && m_deleted_business_messages_isValid;

    m_message_reaction_isValid = ::tele_rest::fromJsonValue(m_message_reaction, json[QString("message_reaction")]);
    m_message_reaction_isSet = !json[QString("message_reaction")].isNull() && m_message_reaction_isValid;

    m_message_reaction_count_isValid = ::tele_rest::fromJsonValue(m_message_reaction_count, json[QString("message_reaction_count")]);
    m_message_reaction_count_isSet = !json[QString("message_reaction_count")].isNull() && m_message_reaction_count_isValid;

    m_inline_query_isValid = ::tele_rest::fromJsonValue(m_inline_query, json[QString("inline_query")]);
    m_inline_query_isSet = !json[QString("inline_query")].isNull() && m_inline_query_isValid;

    m_chosen_inline_result_isValid = ::tele_rest::fromJsonValue(m_chosen_inline_result, json[QString("chosen_inline_result")]);
    m_chosen_inline_result_isSet = !json[QString("chosen_inline_result")].isNull() && m_chosen_inline_result_isValid;

    m_callback_query_isValid = ::tele_rest::fromJsonValue(m_callback_query, json[QString("callback_query")]);
    m_callback_query_isSet = !json[QString("callback_query")].isNull() && m_callback_query_isValid;

    m_shipping_query_isValid = ::tele_rest::fromJsonValue(m_shipping_query, json[QString("shipping_query")]);
    m_shipping_query_isSet = !json[QString("shipping_query")].isNull() && m_shipping_query_isValid;

    m_pre_checkout_query_isValid = ::tele_rest::fromJsonValue(m_pre_checkout_query, json[QString("pre_checkout_query")]);
    m_pre_checkout_query_isSet = !json[QString("pre_checkout_query")].isNull() && m_pre_checkout_query_isValid;

    m_purchased_paid_media_isValid = ::tele_rest::fromJsonValue(m_purchased_paid_media, json[QString("purchased_paid_media")]);
    m_purchased_paid_media_isSet = !json[QString("purchased_paid_media")].isNull() && m_purchased_paid_media_isValid;

    m_poll_isValid = ::tele_rest::fromJsonValue(m_poll, json[QString("poll")]);
    m_poll_isSet = !json[QString("poll")].isNull() && m_poll_isValid;

    m_poll_answer_isValid = ::tele_rest::fromJsonValue(m_poll_answer, json[QString("poll_answer")]);
    m_poll_answer_isSet = !json[QString("poll_answer")].isNull() && m_poll_answer_isValid;

    m_my_chat_member_isValid = ::tele_rest::fromJsonValue(m_my_chat_member, json[QString("my_chat_member")]);
    m_my_chat_member_isSet = !json[QString("my_chat_member")].isNull() && m_my_chat_member_isValid;

    m_chat_member_isValid = ::tele_rest::fromJsonValue(m_chat_member, json[QString("chat_member")]);
    m_chat_member_isSet = !json[QString("chat_member")].isNull() && m_chat_member_isValid;

    m_chat_join_request_isValid = ::tele_rest::fromJsonValue(m_chat_join_request, json[QString("chat_join_request")]);
    m_chat_join_request_isSet = !json[QString("chat_join_request")].isNull() && m_chat_join_request_isValid;

    m_chat_boost_isValid = ::tele_rest::fromJsonValue(m_chat_boost, json[QString("chat_boost")]);
    m_chat_boost_isSet = !json[QString("chat_boost")].isNull() && m_chat_boost_isValid;

    m_removed_chat_boost_isValid = ::tele_rest::fromJsonValue(m_removed_chat_boost, json[QString("removed_chat_boost")]);
    m_removed_chat_boost_isSet = !json[QString("removed_chat_boost")].isNull() && m_removed_chat_boost_isValid;
}

QString OAIUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_update_id_isSet) {
        obj.insert(QString("update_id"), ::tele_rest::toJsonValue(m_update_id));
    }
    if (m_message.isSet()) {
        obj.insert(QString("message"), ::tele_rest::toJsonValue(m_message));
    }
    if (m_edited_message.isSet()) {
        obj.insert(QString("edited_message"), ::tele_rest::toJsonValue(m_edited_message));
    }
    if (m_channel_post.isSet()) {
        obj.insert(QString("channel_post"), ::tele_rest::toJsonValue(m_channel_post));
    }
    if (m_edited_channel_post.isSet()) {
        obj.insert(QString("edited_channel_post"), ::tele_rest::toJsonValue(m_edited_channel_post));
    }
    if (m_business_connection.isSet()) {
        obj.insert(QString("business_connection"), ::tele_rest::toJsonValue(m_business_connection));
    }
    if (m_business_message.isSet()) {
        obj.insert(QString("business_message"), ::tele_rest::toJsonValue(m_business_message));
    }
    if (m_edited_business_message.isSet()) {
        obj.insert(QString("edited_business_message"), ::tele_rest::toJsonValue(m_edited_business_message));
    }
    if (m_deleted_business_messages.isSet()) {
        obj.insert(QString("deleted_business_messages"), ::tele_rest::toJsonValue(m_deleted_business_messages));
    }
    if (m_message_reaction.isSet()) {
        obj.insert(QString("message_reaction"), ::tele_rest::toJsonValue(m_message_reaction));
    }
    if (m_message_reaction_count.isSet()) {
        obj.insert(QString("message_reaction_count"), ::tele_rest::toJsonValue(m_message_reaction_count));
    }
    if (m_inline_query.isSet()) {
        obj.insert(QString("inline_query"), ::tele_rest::toJsonValue(m_inline_query));
    }
    if (m_chosen_inline_result.isSet()) {
        obj.insert(QString("chosen_inline_result"), ::tele_rest::toJsonValue(m_chosen_inline_result));
    }
    if (m_callback_query.isSet()) {
        obj.insert(QString("callback_query"), ::tele_rest::toJsonValue(m_callback_query));
    }
    if (m_shipping_query.isSet()) {
        obj.insert(QString("shipping_query"), ::tele_rest::toJsonValue(m_shipping_query));
    }
    if (m_pre_checkout_query.isSet()) {
        obj.insert(QString("pre_checkout_query"), ::tele_rest::toJsonValue(m_pre_checkout_query));
    }
    if (m_purchased_paid_media.isSet()) {
        obj.insert(QString("purchased_paid_media"), ::tele_rest::toJsonValue(m_purchased_paid_media));
    }
    if (m_poll.isSet()) {
        obj.insert(QString("poll"), ::tele_rest::toJsonValue(m_poll));
    }
    if (m_poll_answer.isSet()) {
        obj.insert(QString("poll_answer"), ::tele_rest::toJsonValue(m_poll_answer));
    }
    if (m_my_chat_member.isSet()) {
        obj.insert(QString("my_chat_member"), ::tele_rest::toJsonValue(m_my_chat_member));
    }
    if (m_chat_member.isSet()) {
        obj.insert(QString("chat_member"), ::tele_rest::toJsonValue(m_chat_member));
    }
    if (m_chat_join_request.isSet()) {
        obj.insert(QString("chat_join_request"), ::tele_rest::toJsonValue(m_chat_join_request));
    }
    if (m_chat_boost.isSet()) {
        obj.insert(QString("chat_boost"), ::tele_rest::toJsonValue(m_chat_boost));
    }
    if (m_removed_chat_boost.isSet()) {
        obj.insert(QString("removed_chat_boost"), ::tele_rest::toJsonValue(m_removed_chat_boost));
    }
    return obj;
}

qint32 OAIUpdate::getUpdateId() const {
    return m_update_id;
}
void OAIUpdate::setUpdateId(const qint32 &update_id) {
    m_update_id = update_id;
    m_update_id_isSet = true;
}

bool OAIUpdate::is_update_id_Set() const{
    return m_update_id_isSet;
}

bool OAIUpdate::is_update_id_Valid() const{
    return m_update_id_isValid;
}

OAIMessage OAIUpdate::getMessage() const {
    return m_message;
}
void OAIUpdate::setMessage(const OAIMessage &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIUpdate::is_message_Set() const{
    return m_message_isSet;
}

bool OAIUpdate::is_message_Valid() const{
    return m_message_isValid;
}

OAIMessage OAIUpdate::getEditedMessage() const {
    return m_edited_message;
}
void OAIUpdate::setEditedMessage(const OAIMessage &edited_message) {
    m_edited_message = edited_message;
    m_edited_message_isSet = true;
}

bool OAIUpdate::is_edited_message_Set() const{
    return m_edited_message_isSet;
}

bool OAIUpdate::is_edited_message_Valid() const{
    return m_edited_message_isValid;
}

OAIMessage OAIUpdate::getChannelPost() const {
    return m_channel_post;
}
void OAIUpdate::setChannelPost(const OAIMessage &channel_post) {
    m_channel_post = channel_post;
    m_channel_post_isSet = true;
}

bool OAIUpdate::is_channel_post_Set() const{
    return m_channel_post_isSet;
}

bool OAIUpdate::is_channel_post_Valid() const{
    return m_channel_post_isValid;
}

OAIMessage OAIUpdate::getEditedChannelPost() const {
    return m_edited_channel_post;
}
void OAIUpdate::setEditedChannelPost(const OAIMessage &edited_channel_post) {
    m_edited_channel_post = edited_channel_post;
    m_edited_channel_post_isSet = true;
}

bool OAIUpdate::is_edited_channel_post_Set() const{
    return m_edited_channel_post_isSet;
}

bool OAIUpdate::is_edited_channel_post_Valid() const{
    return m_edited_channel_post_isValid;
}

OAIBusinessConnection OAIUpdate::getBusinessConnection() const {
    return m_business_connection;
}
void OAIUpdate::setBusinessConnection(const OAIBusinessConnection &business_connection) {
    m_business_connection = business_connection;
    m_business_connection_isSet = true;
}

bool OAIUpdate::is_business_connection_Set() const{
    return m_business_connection_isSet;
}

bool OAIUpdate::is_business_connection_Valid() const{
    return m_business_connection_isValid;
}

OAIMessage OAIUpdate::getBusinessMessage() const {
    return m_business_message;
}
void OAIUpdate::setBusinessMessage(const OAIMessage &business_message) {
    m_business_message = business_message;
    m_business_message_isSet = true;
}

bool OAIUpdate::is_business_message_Set() const{
    return m_business_message_isSet;
}

bool OAIUpdate::is_business_message_Valid() const{
    return m_business_message_isValid;
}

OAIMessage OAIUpdate::getEditedBusinessMessage() const {
    return m_edited_business_message;
}
void OAIUpdate::setEditedBusinessMessage(const OAIMessage &edited_business_message) {
    m_edited_business_message = edited_business_message;
    m_edited_business_message_isSet = true;
}

bool OAIUpdate::is_edited_business_message_Set() const{
    return m_edited_business_message_isSet;
}

bool OAIUpdate::is_edited_business_message_Valid() const{
    return m_edited_business_message_isValid;
}

OAIBusinessMessagesDeleted OAIUpdate::getDeletedBusinessMessages() const {
    return m_deleted_business_messages;
}
void OAIUpdate::setDeletedBusinessMessages(const OAIBusinessMessagesDeleted &deleted_business_messages) {
    m_deleted_business_messages = deleted_business_messages;
    m_deleted_business_messages_isSet = true;
}

bool OAIUpdate::is_deleted_business_messages_Set() const{
    return m_deleted_business_messages_isSet;
}

bool OAIUpdate::is_deleted_business_messages_Valid() const{
    return m_deleted_business_messages_isValid;
}

OAIMessageReactionUpdated OAIUpdate::getMessageReaction() const {
    return m_message_reaction;
}
void OAIUpdate::setMessageReaction(const OAIMessageReactionUpdated &message_reaction) {
    m_message_reaction = message_reaction;
    m_message_reaction_isSet = true;
}

bool OAIUpdate::is_message_reaction_Set() const{
    return m_message_reaction_isSet;
}

bool OAIUpdate::is_message_reaction_Valid() const{
    return m_message_reaction_isValid;
}

OAIMessageReactionCountUpdated OAIUpdate::getMessageReactionCount() const {
    return m_message_reaction_count;
}
void OAIUpdate::setMessageReactionCount(const OAIMessageReactionCountUpdated &message_reaction_count) {
    m_message_reaction_count = message_reaction_count;
    m_message_reaction_count_isSet = true;
}

bool OAIUpdate::is_message_reaction_count_Set() const{
    return m_message_reaction_count_isSet;
}

bool OAIUpdate::is_message_reaction_count_Valid() const{
    return m_message_reaction_count_isValid;
}

OAIInlineQuery OAIUpdate::getInlineQuery() const {
    return m_inline_query;
}
void OAIUpdate::setInlineQuery(const OAIInlineQuery &inline_query) {
    m_inline_query = inline_query;
    m_inline_query_isSet = true;
}

bool OAIUpdate::is_inline_query_Set() const{
    return m_inline_query_isSet;
}

bool OAIUpdate::is_inline_query_Valid() const{
    return m_inline_query_isValid;
}

OAIChosenInlineResult OAIUpdate::getChosenInlineResult() const {
    return m_chosen_inline_result;
}
void OAIUpdate::setChosenInlineResult(const OAIChosenInlineResult &chosen_inline_result) {
    m_chosen_inline_result = chosen_inline_result;
    m_chosen_inline_result_isSet = true;
}

bool OAIUpdate::is_chosen_inline_result_Set() const{
    return m_chosen_inline_result_isSet;
}

bool OAIUpdate::is_chosen_inline_result_Valid() const{
    return m_chosen_inline_result_isValid;
}

OAICallbackQuery OAIUpdate::getCallbackQuery() const {
    return m_callback_query;
}
void OAIUpdate::setCallbackQuery(const OAICallbackQuery &callback_query) {
    m_callback_query = callback_query;
    m_callback_query_isSet = true;
}

bool OAIUpdate::is_callback_query_Set() const{
    return m_callback_query_isSet;
}

bool OAIUpdate::is_callback_query_Valid() const{
    return m_callback_query_isValid;
}

OAIShippingQuery OAIUpdate::getShippingQuery() const {
    return m_shipping_query;
}
void OAIUpdate::setShippingQuery(const OAIShippingQuery &shipping_query) {
    m_shipping_query = shipping_query;
    m_shipping_query_isSet = true;
}

bool OAIUpdate::is_shipping_query_Set() const{
    return m_shipping_query_isSet;
}

bool OAIUpdate::is_shipping_query_Valid() const{
    return m_shipping_query_isValid;
}

OAIPreCheckoutQuery OAIUpdate::getPreCheckoutQuery() const {
    return m_pre_checkout_query;
}
void OAIUpdate::setPreCheckoutQuery(const OAIPreCheckoutQuery &pre_checkout_query) {
    m_pre_checkout_query = pre_checkout_query;
    m_pre_checkout_query_isSet = true;
}

bool OAIUpdate::is_pre_checkout_query_Set() const{
    return m_pre_checkout_query_isSet;
}

bool OAIUpdate::is_pre_checkout_query_Valid() const{
    return m_pre_checkout_query_isValid;
}

OAIPaidMediaPurchased OAIUpdate::getPurchasedPaidMedia() const {
    return m_purchased_paid_media;
}
void OAIUpdate::setPurchasedPaidMedia(const OAIPaidMediaPurchased &purchased_paid_media) {
    m_purchased_paid_media = purchased_paid_media;
    m_purchased_paid_media_isSet = true;
}

bool OAIUpdate::is_purchased_paid_media_Set() const{
    return m_purchased_paid_media_isSet;
}

bool OAIUpdate::is_purchased_paid_media_Valid() const{
    return m_purchased_paid_media_isValid;
}

OAIPoll OAIUpdate::getPoll() const {
    return m_poll;
}
void OAIUpdate::setPoll(const OAIPoll &poll) {
    m_poll = poll;
    m_poll_isSet = true;
}

bool OAIUpdate::is_poll_Set() const{
    return m_poll_isSet;
}

bool OAIUpdate::is_poll_Valid() const{
    return m_poll_isValid;
}

OAIPollAnswer OAIUpdate::getPollAnswer() const {
    return m_poll_answer;
}
void OAIUpdate::setPollAnswer(const OAIPollAnswer &poll_answer) {
    m_poll_answer = poll_answer;
    m_poll_answer_isSet = true;
}

bool OAIUpdate::is_poll_answer_Set() const{
    return m_poll_answer_isSet;
}

bool OAIUpdate::is_poll_answer_Valid() const{
    return m_poll_answer_isValid;
}

OAIChatMemberUpdated OAIUpdate::getMyChatMember() const {
    return m_my_chat_member;
}
void OAIUpdate::setMyChatMember(const OAIChatMemberUpdated &my_chat_member) {
    m_my_chat_member = my_chat_member;
    m_my_chat_member_isSet = true;
}

bool OAIUpdate::is_my_chat_member_Set() const{
    return m_my_chat_member_isSet;
}

bool OAIUpdate::is_my_chat_member_Valid() const{
    return m_my_chat_member_isValid;
}

OAIChatMemberUpdated OAIUpdate::getChatMember() const {
    return m_chat_member;
}
void OAIUpdate::setChatMember(const OAIChatMemberUpdated &chat_member) {
    m_chat_member = chat_member;
    m_chat_member_isSet = true;
}

bool OAIUpdate::is_chat_member_Set() const{
    return m_chat_member_isSet;
}

bool OAIUpdate::is_chat_member_Valid() const{
    return m_chat_member_isValid;
}

OAIChatJoinRequest OAIUpdate::getChatJoinRequest() const {
    return m_chat_join_request;
}
void OAIUpdate::setChatJoinRequest(const OAIChatJoinRequest &chat_join_request) {
    m_chat_join_request = chat_join_request;
    m_chat_join_request_isSet = true;
}

bool OAIUpdate::is_chat_join_request_Set() const{
    return m_chat_join_request_isSet;
}

bool OAIUpdate::is_chat_join_request_Valid() const{
    return m_chat_join_request_isValid;
}

OAIChatBoostUpdated OAIUpdate::getChatBoost() const {
    return m_chat_boost;
}
void OAIUpdate::setChatBoost(const OAIChatBoostUpdated &chat_boost) {
    m_chat_boost = chat_boost;
    m_chat_boost_isSet = true;
}

bool OAIUpdate::is_chat_boost_Set() const{
    return m_chat_boost_isSet;
}

bool OAIUpdate::is_chat_boost_Valid() const{
    return m_chat_boost_isValid;
}

OAIChatBoostRemoved OAIUpdate::getRemovedChatBoost() const {
    return m_removed_chat_boost;
}
void OAIUpdate::setRemovedChatBoost(const OAIChatBoostRemoved &removed_chat_boost) {
    m_removed_chat_boost = removed_chat_boost;
    m_removed_chat_boost_isSet = true;
}

bool OAIUpdate::is_removed_chat_boost_Set() const{
    return m_removed_chat_boost_isSet;
}

bool OAIUpdate::is_removed_chat_boost_Valid() const{
    return m_removed_chat_boost_isValid;
}

bool OAIUpdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_update_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_edited_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_post.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_edited_channel_post.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_connection.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_edited_business_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_deleted_business_messages.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_reaction.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_reaction_count.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_inline_query.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chosen_inline_result.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_callback_query.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipping_query.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_pre_checkout_query.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_purchased_paid_media.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_poll.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_poll_answer.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_my_chat_member.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_member.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_join_request.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_boost.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_removed_chat_boost.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_update_id_isValid && true;
}

} // namespace tele_rest
