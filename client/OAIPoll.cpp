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

#include "OAIPoll.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPoll::OAIPoll(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPoll::OAIPoll() {
    this->initializeModel();
}

OAIPoll::~OAIPoll() {}

void OAIPoll::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_question_isSet = false;
    m_question_isValid = false;

    m_options_isSet = false;
    m_options_isValid = false;

    m_total_voter_count_isSet = false;
    m_total_voter_count_isValid = false;

    m_is_closed_isSet = false;
    m_is_closed_isValid = false;

    m_is_anonymous_isSet = false;
    m_is_anonymous_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_allows_multiple_answers_isSet = false;
    m_allows_multiple_answers_isValid = false;

    m_question_entities_isSet = false;
    m_question_entities_isValid = false;

    m_correct_option_id_isSet = false;
    m_correct_option_id_isValid = false;

    m_explanation_isSet = false;
    m_explanation_isValid = false;

    m_explanation_entities_isSet = false;
    m_explanation_entities_isValid = false;

    m_open_period_isSet = false;
    m_open_period_isValid = false;

    m_close_date_isSet = false;
    m_close_date_isValid = false;
}

void OAIPoll::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPoll::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_question_isValid = ::tele_rest::fromJsonValue(m_question, json[QString("question")]);
    m_question_isSet = !json[QString("question")].isNull() && m_question_isValid;

    m_options_isValid = ::tele_rest::fromJsonValue(m_options, json[QString("options")]);
    m_options_isSet = !json[QString("options")].isNull() && m_options_isValid;

    m_total_voter_count_isValid = ::tele_rest::fromJsonValue(m_total_voter_count, json[QString("total_voter_count")]);
    m_total_voter_count_isSet = !json[QString("total_voter_count")].isNull() && m_total_voter_count_isValid;

    m_is_closed_isValid = ::tele_rest::fromJsonValue(m_is_closed, json[QString("is_closed")]);
    m_is_closed_isSet = !json[QString("is_closed")].isNull() && m_is_closed_isValid;

    m_is_anonymous_isValid = ::tele_rest::fromJsonValue(m_is_anonymous, json[QString("is_anonymous")]);
    m_is_anonymous_isSet = !json[QString("is_anonymous")].isNull() && m_is_anonymous_isValid;

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_allows_multiple_answers_isValid = ::tele_rest::fromJsonValue(m_allows_multiple_answers, json[QString("allows_multiple_answers")]);
    m_allows_multiple_answers_isSet = !json[QString("allows_multiple_answers")].isNull() && m_allows_multiple_answers_isValid;

    m_question_entities_isValid = ::tele_rest::fromJsonValue(m_question_entities, json[QString("question_entities")]);
    m_question_entities_isSet = !json[QString("question_entities")].isNull() && m_question_entities_isValid;

    m_correct_option_id_isValid = ::tele_rest::fromJsonValue(m_correct_option_id, json[QString("correct_option_id")]);
    m_correct_option_id_isSet = !json[QString("correct_option_id")].isNull() && m_correct_option_id_isValid;

    m_explanation_isValid = ::tele_rest::fromJsonValue(m_explanation, json[QString("explanation")]);
    m_explanation_isSet = !json[QString("explanation")].isNull() && m_explanation_isValid;

    m_explanation_entities_isValid = ::tele_rest::fromJsonValue(m_explanation_entities, json[QString("explanation_entities")]);
    m_explanation_entities_isSet = !json[QString("explanation_entities")].isNull() && m_explanation_entities_isValid;

    m_open_period_isValid = ::tele_rest::fromJsonValue(m_open_period, json[QString("open_period")]);
    m_open_period_isSet = !json[QString("open_period")].isNull() && m_open_period_isValid;

    m_close_date_isValid = ::tele_rest::fromJsonValue(m_close_date, json[QString("close_date")]);
    m_close_date_isSet = !json[QString("close_date")].isNull() && m_close_date_isValid;
}

QString OAIPoll::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPoll::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_question_isSet) {
        obj.insert(QString("question"), ::tele_rest::toJsonValue(m_question));
    }
    if (m_options.size() > 0) {
        obj.insert(QString("options"), ::tele_rest::toJsonValue(m_options));
    }
    if (m_total_voter_count_isSet) {
        obj.insert(QString("total_voter_count"), ::tele_rest::toJsonValue(m_total_voter_count));
    }
    if (m_is_closed_isSet) {
        obj.insert(QString("is_closed"), ::tele_rest::toJsonValue(m_is_closed));
    }
    if (m_is_anonymous_isSet) {
        obj.insert(QString("is_anonymous"), ::tele_rest::toJsonValue(m_is_anonymous));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_allows_multiple_answers_isSet) {
        obj.insert(QString("allows_multiple_answers"), ::tele_rest::toJsonValue(m_allows_multiple_answers));
    }
    if (m_question_entities.size() > 0) {
        obj.insert(QString("question_entities"), ::tele_rest::toJsonValue(m_question_entities));
    }
    if (m_correct_option_id_isSet) {
        obj.insert(QString("correct_option_id"), ::tele_rest::toJsonValue(m_correct_option_id));
    }
    if (m_explanation_isSet) {
        obj.insert(QString("explanation"), ::tele_rest::toJsonValue(m_explanation));
    }
    if (m_explanation_entities.size() > 0) {
        obj.insert(QString("explanation_entities"), ::tele_rest::toJsonValue(m_explanation_entities));
    }
    if (m_open_period_isSet) {
        obj.insert(QString("open_period"), ::tele_rest::toJsonValue(m_open_period));
    }
    if (m_close_date_isSet) {
        obj.insert(QString("close_date"), ::tele_rest::toJsonValue(m_close_date));
    }
    return obj;
}

QString OAIPoll::getId() const {
    return m_id;
}
void OAIPoll::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIPoll::is_id_Set() const{
    return m_id_isSet;
}

bool OAIPoll::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIPoll::getQuestion() const {
    return m_question;
}
void OAIPoll::setQuestion(const QString &question) {
    m_question = question;
    m_question_isSet = true;
}

bool OAIPoll::is_question_Set() const{
    return m_question_isSet;
}

bool OAIPoll::is_question_Valid() const{
    return m_question_isValid;
}

QList<OAIPollOption> OAIPoll::getOptions() const {
    return m_options;
}
void OAIPoll::setOptions(const QList<OAIPollOption> &options) {
    m_options = options;
    m_options_isSet = true;
}

bool OAIPoll::is_options_Set() const{
    return m_options_isSet;
}

bool OAIPoll::is_options_Valid() const{
    return m_options_isValid;
}

qint32 OAIPoll::getTotalVoterCount() const {
    return m_total_voter_count;
}
void OAIPoll::setTotalVoterCount(const qint32 &total_voter_count) {
    m_total_voter_count = total_voter_count;
    m_total_voter_count_isSet = true;
}

bool OAIPoll::is_total_voter_count_Set() const{
    return m_total_voter_count_isSet;
}

bool OAIPoll::is_total_voter_count_Valid() const{
    return m_total_voter_count_isValid;
}

bool OAIPoll::isIsClosed() const {
    return m_is_closed;
}
void OAIPoll::setIsClosed(const bool &is_closed) {
    m_is_closed = is_closed;
    m_is_closed_isSet = true;
}

bool OAIPoll::is_is_closed_Set() const{
    return m_is_closed_isSet;
}

bool OAIPoll::is_is_closed_Valid() const{
    return m_is_closed_isValid;
}

bool OAIPoll::isIsAnonymous() const {
    return m_is_anonymous;
}
void OAIPoll::setIsAnonymous(const bool &is_anonymous) {
    m_is_anonymous = is_anonymous;
    m_is_anonymous_isSet = true;
}

bool OAIPoll::is_is_anonymous_Set() const{
    return m_is_anonymous_isSet;
}

bool OAIPoll::is_is_anonymous_Valid() const{
    return m_is_anonymous_isValid;
}

QString OAIPoll::getType() const {
    return m_type;
}
void OAIPoll::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIPoll::is_type_Set() const{
    return m_type_isSet;
}

bool OAIPoll::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIPoll::isAllowsMultipleAnswers() const {
    return m_allows_multiple_answers;
}
void OAIPoll::setAllowsMultipleAnswers(const bool &allows_multiple_answers) {
    m_allows_multiple_answers = allows_multiple_answers;
    m_allows_multiple_answers_isSet = true;
}

bool OAIPoll::is_allows_multiple_answers_Set() const{
    return m_allows_multiple_answers_isSet;
}

bool OAIPoll::is_allows_multiple_answers_Valid() const{
    return m_allows_multiple_answers_isValid;
}

QList<OAIMessageEntity> OAIPoll::getQuestionEntities() const {
    return m_question_entities;
}
void OAIPoll::setQuestionEntities(const QList<OAIMessageEntity> &question_entities) {
    m_question_entities = question_entities;
    m_question_entities_isSet = true;
}

bool OAIPoll::is_question_entities_Set() const{
    return m_question_entities_isSet;
}

bool OAIPoll::is_question_entities_Valid() const{
    return m_question_entities_isValid;
}

qint32 OAIPoll::getCorrectOptionId() const {
    return m_correct_option_id;
}
void OAIPoll::setCorrectOptionId(const qint32 &correct_option_id) {
    m_correct_option_id = correct_option_id;
    m_correct_option_id_isSet = true;
}

bool OAIPoll::is_correct_option_id_Set() const{
    return m_correct_option_id_isSet;
}

bool OAIPoll::is_correct_option_id_Valid() const{
    return m_correct_option_id_isValid;
}

QString OAIPoll::getExplanation() const {
    return m_explanation;
}
void OAIPoll::setExplanation(const QString &explanation) {
    m_explanation = explanation;
    m_explanation_isSet = true;
}

bool OAIPoll::is_explanation_Set() const{
    return m_explanation_isSet;
}

bool OAIPoll::is_explanation_Valid() const{
    return m_explanation_isValid;
}

QList<OAIMessageEntity> OAIPoll::getExplanationEntities() const {
    return m_explanation_entities;
}
void OAIPoll::setExplanationEntities(const QList<OAIMessageEntity> &explanation_entities) {
    m_explanation_entities = explanation_entities;
    m_explanation_entities_isSet = true;
}

bool OAIPoll::is_explanation_entities_Set() const{
    return m_explanation_entities_isSet;
}

bool OAIPoll::is_explanation_entities_Valid() const{
    return m_explanation_entities_isValid;
}

qint32 OAIPoll::getOpenPeriod() const {
    return m_open_period;
}
void OAIPoll::setOpenPeriod(const qint32 &open_period) {
    m_open_period = open_period;
    m_open_period_isSet = true;
}

bool OAIPoll::is_open_period_Set() const{
    return m_open_period_isSet;
}

bool OAIPoll::is_open_period_Valid() const{
    return m_open_period_isValid;
}

qint32 OAIPoll::getCloseDate() const {
    return m_close_date;
}
void OAIPoll::setCloseDate(const qint32 &close_date) {
    m_close_date = close_date;
    m_close_date_isSet = true;
}

bool OAIPoll::is_close_date_Set() const{
    return m_close_date_isSet;
}

bool OAIPoll::is_close_date_Valid() const{
    return m_close_date_isValid;
}

bool OAIPoll::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_question_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_options.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_voter_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_closed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_anonymous_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allows_multiple_answers_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_question_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_correct_option_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explanation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explanation_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_open_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_close_date_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPoll::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_question_isValid && m_options_isValid && m_total_voter_count_isValid && m_is_closed_isValid && m_is_anonymous_isValid && m_type_isValid && m_allows_multiple_answers_isValid && true;
}

} // namespace tele_rest
