/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAI_answerInlineQuery_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_answerInlineQuery_post_request::OAI_answerInlineQuery_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_answerInlineQuery_post_request::OAI_answerInlineQuery_post_request() {
    this->initializeModel();
}

OAI_answerInlineQuery_post_request::~OAI_answerInlineQuery_post_request() {}

void OAI_answerInlineQuery_post_request::initializeModel() {

    m_inline_query_id_isSet = false;
    m_inline_query_id_isValid = false;

    m_results_isSet = false;
    m_results_isValid = false;

    m_cache_time_isSet = false;
    m_cache_time_isValid = false;

    m_is_personal_isSet = false;
    m_is_personal_isValid = false;

    m_next_offset_isSet = false;
    m_next_offset_isValid = false;

    m_button_isSet = false;
    m_button_isValid = false;
}

void OAI_answerInlineQuery_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_answerInlineQuery_post_request::fromJsonObject(QJsonObject json) {

    m_inline_query_id_isValid = ::tele_rest::fromJsonValue(m_inline_query_id, json[QString("inline_query_id")]);
    m_inline_query_id_isSet = !json[QString("inline_query_id")].isNull() && m_inline_query_id_isValid;

    m_results_isValid = ::tele_rest::fromJsonValue(m_results, json[QString("results")]);
    m_results_isSet = !json[QString("results")].isNull() && m_results_isValid;

    m_cache_time_isValid = ::tele_rest::fromJsonValue(m_cache_time, json[QString("cache_time")]);
    m_cache_time_isSet = !json[QString("cache_time")].isNull() && m_cache_time_isValid;

    m_is_personal_isValid = ::tele_rest::fromJsonValue(m_is_personal, json[QString("is_personal")]);
    m_is_personal_isSet = !json[QString("is_personal")].isNull() && m_is_personal_isValid;

    m_next_offset_isValid = ::tele_rest::fromJsonValue(m_next_offset, json[QString("next_offset")]);
    m_next_offset_isSet = !json[QString("next_offset")].isNull() && m_next_offset_isValid;

    m_button_isValid = ::tele_rest::fromJsonValue(m_button, json[QString("button")]);
    m_button_isSet = !json[QString("button")].isNull() && m_button_isValid;
}

QString OAI_answerInlineQuery_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_answerInlineQuery_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_inline_query_id_isSet) {
        obj.insert(QString("inline_query_id"), ::tele_rest::toJsonValue(m_inline_query_id));
    }
    if (m_results.size() > 0) {
        obj.insert(QString("results"), ::tele_rest::toJsonValue(m_results));
    }
    if (m_cache_time_isSet) {
        obj.insert(QString("cache_time"), ::tele_rest::toJsonValue(m_cache_time));
    }
    if (m_is_personal_isSet) {
        obj.insert(QString("is_personal"), ::tele_rest::toJsonValue(m_is_personal));
    }
    if (m_next_offset_isSet) {
        obj.insert(QString("next_offset"), ::tele_rest::toJsonValue(m_next_offset));
    }
    if (m_button.isSet()) {
        obj.insert(QString("button"), ::tele_rest::toJsonValue(m_button));
    }
    return obj;
}

QString OAI_answerInlineQuery_post_request::getInlineQueryId() const {
    return m_inline_query_id;
}
void OAI_answerInlineQuery_post_request::setInlineQueryId(const QString &inline_query_id) {
    m_inline_query_id = inline_query_id;
    m_inline_query_id_isSet = true;
}

bool OAI_answerInlineQuery_post_request::is_inline_query_id_Set() const{
    return m_inline_query_id_isSet;
}

bool OAI_answerInlineQuery_post_request::is_inline_query_id_Valid() const{
    return m_inline_query_id_isValid;
}

QList<OAIInlineQueryResult> OAI_answerInlineQuery_post_request::getResults() const {
    return m_results;
}
void OAI_answerInlineQuery_post_request::setResults(const QList<OAIInlineQueryResult> &results) {
    m_results = results;
    m_results_isSet = true;
}

bool OAI_answerInlineQuery_post_request::is_results_Set() const{
    return m_results_isSet;
}

bool OAI_answerInlineQuery_post_request::is_results_Valid() const{
    return m_results_isValid;
}

qint32 OAI_answerInlineQuery_post_request::getCacheTime() const {
    return m_cache_time;
}
void OAI_answerInlineQuery_post_request::setCacheTime(const qint32 &cache_time) {
    m_cache_time = cache_time;
    m_cache_time_isSet = true;
}

bool OAI_answerInlineQuery_post_request::is_cache_time_Set() const{
    return m_cache_time_isSet;
}

bool OAI_answerInlineQuery_post_request::is_cache_time_Valid() const{
    return m_cache_time_isValid;
}

bool OAI_answerInlineQuery_post_request::isIsPersonal() const {
    return m_is_personal;
}
void OAI_answerInlineQuery_post_request::setIsPersonal(const bool &is_personal) {
    m_is_personal = is_personal;
    m_is_personal_isSet = true;
}

bool OAI_answerInlineQuery_post_request::is_is_personal_Set() const{
    return m_is_personal_isSet;
}

bool OAI_answerInlineQuery_post_request::is_is_personal_Valid() const{
    return m_is_personal_isValid;
}

QString OAI_answerInlineQuery_post_request::getNextOffset() const {
    return m_next_offset;
}
void OAI_answerInlineQuery_post_request::setNextOffset(const QString &next_offset) {
    m_next_offset = next_offset;
    m_next_offset_isSet = true;
}

bool OAI_answerInlineQuery_post_request::is_next_offset_Set() const{
    return m_next_offset_isSet;
}

bool OAI_answerInlineQuery_post_request::is_next_offset_Valid() const{
    return m_next_offset_isValid;
}

OAIInlineQueryResultsButton OAI_answerInlineQuery_post_request::getButton() const {
    return m_button;
}
void OAI_answerInlineQuery_post_request::setButton(const OAIInlineQueryResultsButton &button) {
    m_button = button;
    m_button_isSet = true;
}

bool OAI_answerInlineQuery_post_request::is_button_Set() const{
    return m_button_isSet;
}

bool OAI_answerInlineQuery_post_request::is_button_Valid() const{
    return m_button_isValid;
}

bool OAI_answerInlineQuery_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_inline_query_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_results.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_cache_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_personal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_next_offset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_button.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAI_answerInlineQuery_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_inline_query_id_isValid && m_results_isValid && true;
}

} // namespace tele_rest
