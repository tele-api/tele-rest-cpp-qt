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

#include "OAIInlineQuery.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineQuery::OAIInlineQuery(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineQuery::OAIInlineQuery() {
    this->initializeModel();
}

OAIInlineQuery::~OAIInlineQuery() {}

void OAIInlineQuery::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_from_isSet = false;
    m_from_isValid = false;

    m_query_isSet = false;
    m_query_isValid = false;

    m_offset_isSet = false;
    m_offset_isValid = false;

    m_chat_type_isSet = false;
    m_chat_type_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;
}

void OAIInlineQuery::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineQuery::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_from_isValid = ::tele_rest::fromJsonValue(m_from, json[QString("from")]);
    m_from_isSet = !json[QString("from")].isNull() && m_from_isValid;

    m_query_isValid = ::tele_rest::fromJsonValue(m_query, json[QString("query")]);
    m_query_isSet = !json[QString("query")].isNull() && m_query_isValid;

    m_offset_isValid = ::tele_rest::fromJsonValue(m_offset, json[QString("offset")]);
    m_offset_isSet = !json[QString("offset")].isNull() && m_offset_isValid;

    m_chat_type_isValid = ::tele_rest::fromJsonValue(m_chat_type, json[QString("chat_type")]);
    m_chat_type_isSet = !json[QString("chat_type")].isNull() && m_chat_type_isValid;

    m_location_isValid = ::tele_rest::fromJsonValue(m_location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;
}

QString OAIInlineQuery::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineQuery::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_from.isSet()) {
        obj.insert(QString("from"), ::tele_rest::toJsonValue(m_from));
    }
    if (m_query_isSet) {
        obj.insert(QString("query"), ::tele_rest::toJsonValue(m_query));
    }
    if (m_offset_isSet) {
        obj.insert(QString("offset"), ::tele_rest::toJsonValue(m_offset));
    }
    if (m_chat_type_isSet) {
        obj.insert(QString("chat_type"), ::tele_rest::toJsonValue(m_chat_type));
    }
    if (m_location.isSet()) {
        obj.insert(QString("location"), ::tele_rest::toJsonValue(m_location));
    }
    return obj;
}

QString OAIInlineQuery::getId() const {
    return m_id;
}
void OAIInlineQuery::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInlineQuery::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInlineQuery::is_id_Valid() const{
    return m_id_isValid;
}

OAIUser OAIInlineQuery::getFrom() const {
    return m_from;
}
void OAIInlineQuery::setFrom(const OAIUser &from) {
    m_from = from;
    m_from_isSet = true;
}

bool OAIInlineQuery::is_from_Set() const{
    return m_from_isSet;
}

bool OAIInlineQuery::is_from_Valid() const{
    return m_from_isValid;
}

QString OAIInlineQuery::getQuery() const {
    return m_query;
}
void OAIInlineQuery::setQuery(const QString &query) {
    m_query = query;
    m_query_isSet = true;
}

bool OAIInlineQuery::is_query_Set() const{
    return m_query_isSet;
}

bool OAIInlineQuery::is_query_Valid() const{
    return m_query_isValid;
}

QString OAIInlineQuery::getOffset() const {
    return m_offset;
}
void OAIInlineQuery::setOffset(const QString &offset) {
    m_offset = offset;
    m_offset_isSet = true;
}

bool OAIInlineQuery::is_offset_Set() const{
    return m_offset_isSet;
}

bool OAIInlineQuery::is_offset_Valid() const{
    return m_offset_isValid;
}

QString OAIInlineQuery::getChatType() const {
    return m_chat_type;
}
void OAIInlineQuery::setChatType(const QString &chat_type) {
    m_chat_type = chat_type;
    m_chat_type_isSet = true;
}

bool OAIInlineQuery::is_chat_type_Set() const{
    return m_chat_type_isSet;
}

bool OAIInlineQuery::is_chat_type_Valid() const{
    return m_chat_type_isValid;
}

OAILocation OAIInlineQuery::getLocation() const {
    return m_location;
}
void OAIInlineQuery::setLocation(const OAILocation &location) {
    m_location = location;
    m_location_isSet = true;
}

bool OAIInlineQuery::is_location_Set() const{
    return m_location_isSet;
}

bool OAIInlineQuery::is_location_Valid() const{
    return m_location_isValid;
}

bool OAIInlineQuery::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_from.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_query_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_offset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_location.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInlineQuery::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_from_isValid && m_query_isValid && m_offset_isValid && true;
}

} // namespace tele_rest
