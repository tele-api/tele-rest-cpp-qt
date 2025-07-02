/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIChatMemberUpdated.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatMemberUpdated::OAIChatMemberUpdated(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatMemberUpdated::OAIChatMemberUpdated() {
    this->initializeModel();
}

OAIChatMemberUpdated::~OAIChatMemberUpdated() {}

void OAIChatMemberUpdated::initializeModel() {

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_from_isSet = false;
    m_from_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_old_chat_member_isSet = false;
    m_old_chat_member_isValid = false;

    m_new_chat_member_isSet = false;
    m_new_chat_member_isValid = false;

    m_invite_link_isSet = false;
    m_invite_link_isValid = false;

    m_via_join_request_isSet = false;
    m_via_join_request_isValid = false;

    m_via_chat_folder_invite_link_isSet = false;
    m_via_chat_folder_invite_link_isValid = false;
}

void OAIChatMemberUpdated::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatMemberUpdated::fromJsonObject(QJsonObject json) {

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_from_isValid = ::tele_rest::fromJsonValue(m_from, json[QString("from")]);
    m_from_isSet = !json[QString("from")].isNull() && m_from_isValid;

    m_date_isValid = ::tele_rest::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_old_chat_member_isValid = ::tele_rest::fromJsonValue(m_old_chat_member, json[QString("old_chat_member")]);
    m_old_chat_member_isSet = !json[QString("old_chat_member")].isNull() && m_old_chat_member_isValid;

    m_new_chat_member_isValid = ::tele_rest::fromJsonValue(m_new_chat_member, json[QString("new_chat_member")]);
    m_new_chat_member_isSet = !json[QString("new_chat_member")].isNull() && m_new_chat_member_isValid;

    m_invite_link_isValid = ::tele_rest::fromJsonValue(m_invite_link, json[QString("invite_link")]);
    m_invite_link_isSet = !json[QString("invite_link")].isNull() && m_invite_link_isValid;

    m_via_join_request_isValid = ::tele_rest::fromJsonValue(m_via_join_request, json[QString("via_join_request")]);
    m_via_join_request_isSet = !json[QString("via_join_request")].isNull() && m_via_join_request_isValid;

    m_via_chat_folder_invite_link_isValid = ::tele_rest::fromJsonValue(m_via_chat_folder_invite_link, json[QString("via_chat_folder_invite_link")]);
    m_via_chat_folder_invite_link_isSet = !json[QString("via_chat_folder_invite_link")].isNull() && m_via_chat_folder_invite_link_isValid;
}

QString OAIChatMemberUpdated::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatMemberUpdated::asJsonObject() const {
    QJsonObject obj;
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_from.isSet()) {
        obj.insert(QString("from"), ::tele_rest::toJsonValue(m_from));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::tele_rest::toJsonValue(m_date));
    }
    if (m_old_chat_member.isSet()) {
        obj.insert(QString("old_chat_member"), ::tele_rest::toJsonValue(m_old_chat_member));
    }
    if (m_new_chat_member.isSet()) {
        obj.insert(QString("new_chat_member"), ::tele_rest::toJsonValue(m_new_chat_member));
    }
    if (m_invite_link.isSet()) {
        obj.insert(QString("invite_link"), ::tele_rest::toJsonValue(m_invite_link));
    }
    if (m_via_join_request_isSet) {
        obj.insert(QString("via_join_request"), ::tele_rest::toJsonValue(m_via_join_request));
    }
    if (m_via_chat_folder_invite_link_isSet) {
        obj.insert(QString("via_chat_folder_invite_link"), ::tele_rest::toJsonValue(m_via_chat_folder_invite_link));
    }
    return obj;
}

OAIChat OAIChatMemberUpdated::getChat() const {
    return m_chat;
}
void OAIChatMemberUpdated::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIChatMemberUpdated::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIChatMemberUpdated::is_chat_Valid() const{
    return m_chat_isValid;
}

OAIUser OAIChatMemberUpdated::getFrom() const {
    return m_from;
}
void OAIChatMemberUpdated::setFrom(const OAIUser &from) {
    m_from = from;
    m_from_isSet = true;
}

bool OAIChatMemberUpdated::is_from_Set() const{
    return m_from_isSet;
}

bool OAIChatMemberUpdated::is_from_Valid() const{
    return m_from_isValid;
}

qint32 OAIChatMemberUpdated::getDate() const {
    return m_date;
}
void OAIChatMemberUpdated::setDate(const qint32 &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAIChatMemberUpdated::is_date_Set() const{
    return m_date_isSet;
}

bool OAIChatMemberUpdated::is_date_Valid() const{
    return m_date_isValid;
}

OAIChatMember OAIChatMemberUpdated::getOldChatMember() const {
    return m_old_chat_member;
}
void OAIChatMemberUpdated::setOldChatMember(const OAIChatMember &old_chat_member) {
    m_old_chat_member = old_chat_member;
    m_old_chat_member_isSet = true;
}

bool OAIChatMemberUpdated::is_old_chat_member_Set() const{
    return m_old_chat_member_isSet;
}

bool OAIChatMemberUpdated::is_old_chat_member_Valid() const{
    return m_old_chat_member_isValid;
}

OAIChatMember OAIChatMemberUpdated::getNewChatMember() const {
    return m_new_chat_member;
}
void OAIChatMemberUpdated::setNewChatMember(const OAIChatMember &new_chat_member) {
    m_new_chat_member = new_chat_member;
    m_new_chat_member_isSet = true;
}

bool OAIChatMemberUpdated::is_new_chat_member_Set() const{
    return m_new_chat_member_isSet;
}

bool OAIChatMemberUpdated::is_new_chat_member_Valid() const{
    return m_new_chat_member_isValid;
}

OAIChatInviteLink OAIChatMemberUpdated::getInviteLink() const {
    return m_invite_link;
}
void OAIChatMemberUpdated::setInviteLink(const OAIChatInviteLink &invite_link) {
    m_invite_link = invite_link;
    m_invite_link_isSet = true;
}

bool OAIChatMemberUpdated::is_invite_link_Set() const{
    return m_invite_link_isSet;
}

bool OAIChatMemberUpdated::is_invite_link_Valid() const{
    return m_invite_link_isValid;
}

bool OAIChatMemberUpdated::isViaJoinRequest() const {
    return m_via_join_request;
}
void OAIChatMemberUpdated::setViaJoinRequest(const bool &via_join_request) {
    m_via_join_request = via_join_request;
    m_via_join_request_isSet = true;
}

bool OAIChatMemberUpdated::is_via_join_request_Set() const{
    return m_via_join_request_isSet;
}

bool OAIChatMemberUpdated::is_via_join_request_Valid() const{
    return m_via_join_request_isValid;
}

bool OAIChatMemberUpdated::isViaChatFolderInviteLink() const {
    return m_via_chat_folder_invite_link;
}
void OAIChatMemberUpdated::setViaChatFolderInviteLink(const bool &via_chat_folder_invite_link) {
    m_via_chat_folder_invite_link = via_chat_folder_invite_link;
    m_via_chat_folder_invite_link_isSet = true;
}

bool OAIChatMemberUpdated::is_via_chat_folder_invite_link_Set() const{
    return m_via_chat_folder_invite_link_isSet;
}

bool OAIChatMemberUpdated::is_via_chat_folder_invite_link_Valid() const{
    return m_via_chat_folder_invite_link_isValid;
}

bool OAIChatMemberUpdated::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_from.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_old_chat_member.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_chat_member.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_invite_link.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_via_join_request_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_via_chat_folder_invite_link_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatMemberUpdated::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_isValid && m_from_isValid && m_date_isValid && m_old_chat_member_isValid && m_new_chat_member_isValid && true;
}

} // namespace tele_rest
